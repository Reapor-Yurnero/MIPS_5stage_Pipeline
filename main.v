module main(clk, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, PCout, mem1, mem2);
   input clk;
   output [31:0] t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, mem1, mem2;
   output [6:0]  PCout;
   // IF Stage
   wire [31:0] IMout;
   wire [6:0]  PCout, PC4, PCBMUXout, PCJMUXout, Baddr, Jaddr, PC4out;
   // ID Stage
   wire [31:0] I, ID_extended, Regr1, Regr2, Cmpina, Cmpinb;
   wire [27:0] ID_shifted;
   wire [15:0] ID_constant;
   wire [7:0]  Controlout, Controlres;
   wire [4:0]  ID_rs, ID_rt, ID_rd;
   wire [1:0]  r1ctrl, r2ctrl, ALUOp;
   wire        IF_flush, RegWrite, Cmpres, Branch, RegDST, BranchEQ, BranchNE, MemRead, MemWrite, MemtoReg, ALUSrc, Jump, ID_Branch, stall;
   // EX
   wire        ID_EX_RegWrite, ID_EX_MEMRead, ID_EX_ALUSrc, ID_EX_RegDst;
   wire [1:0]  ID_EX_ALUOp, ALUsrca, ALUsrcb, ID_EX_MEMctr, ID_EX_WBctr;
   wire [3:0]  ID_EX_EXctr, ALUctr;
   wire [4:0]  EX_regres, ID_EX_rs, ID_EX_rt, ID_EX_rd;
   wire [31:0] ALUres, ALUina, ALUinb, ID_EX_r1, ID_EX_r2, ID_EX_extended, ALUsrcMUXBin0;
   // MEM
   wire        EX_MEM_MEMRead, EX_MEM_MEMWrite, EX_MEM_RegWrite;
   wire [1:0]  EX_MEM_MEMctr, EX_MEM_WBctr;
   wire [4:0]  EX_MEM_rs, EX_MEM_rt, EX_MEM_regres;
   wire [31:0] EX_MEM_r2, EX_MEM_ALUres, DMres;
   // WB
   wire        MEM_WB_MemtoReg, MEM_WB_MEMRead, MEM_WB_RegWrite;
   wire [2:0]  MEM_WB_WBctr;
   wire [4:0]  MEM_WB_rs, MEM_WB_rt, MEM_WB_regres;
   wire [31:0] MEM_WB_ALUres, MEM_WB_MEMres, MEM_WB_res;

   // IF
   PCReg PC (PCJMUXout[6:0], PCout, clk, stall);
   IMEM IM(PCout, IMout);
   assign PC4 = PCout + 4;
   MUX_2_1 #(7) PCBMUX(PC4, Baddr, Branch, PCBMUXout);
   MUX_2_1 #(7) PCJMUX(PCBMUXout, Jaddr, Jump, PCJMUXout);
   // ID
   assign Branch = (BranchEQ & Cmpres) | (BranchNE & ~Cmpres); // branch or not
   assign ID_Branch = BranchEQ | BranchNE; // whether the current instruction is BNE/BEQ
   assign IF_flush = ~stall & (Branch | Jump);
   IF_ID_Reg IF_ID_REG(PC4, PC4out, IMout, I, clk, IF_flush, stall);
   assign ID_rs = I[25:21];
   assign ID_rt = I[20:16];
   assign ID_rd = I[15:11];
   assign ID_constant = I[15:0];
   shifter26 Shifter26(I[25:0], ID_shifted);
   assign Jaddr = {I[31:28],ID_shifted};
   signEx signEX(ID_constant,ID_extended);
   assign Baddr = (ID_extended << 2)+ PC4out;
   regFile RF(Regr1, Regr2, MEM_WB_res, MEM_WB_regres, ID_rs, ID_rt, MEM_WB_RegWrite, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, clk);
   IDForward IDF(EX_MEM_regres, MEM_WB_regres, EX_MEM_MEMRead, MEM_WB_MEMRead,EX_MEM_RegWrite, MEM_WB_RegWrite, ID_rs, ID_rt, r1ctrl, r2ctrl);
   MUX_4_1 CmpinMUXa(Regr1, MEM_WB_MEMres, EX_MEM_ALUres, Regr1, r1ctrl, Cmpina);
   MUX_4_1 CmpinMUXb(Regr2, MEM_WB_MEMres, EX_MEM_ALUres, Regr2, r2ctrl, Cmpinb);
   assign Cmpres = (Cmpina == Cmpinb);
   Control Controller(I[31:26], RegDST, BranchEQ, BranchNE, MemRead, MemWrite, MemtoReg, ALUOp, ALUSrc, RegWrite, Jump);
   HazardDetecter HD(ID_EX_MEMRead, EX_regres, ID_EX_RegWrite, EX_MEM_MEMRead, EX_MEM_regres, EX_MEM_RegWrite, MEM_WB_RegWrite, MEM_WB_MEMRead, MEM_WB_regres, ID_rs, ID_rt, ID_Branch, stall);
   assign Controlout = {MemtoReg, RegWrite, MemRead, MemWrite, ALUOp, ALUSrc, RegDST};
   MUX_2_1 #8 ControlMUX(Controlout, 8'b0, stall, Controlres);

   // EX stage
   ID_EX_Reg ID_EX_REG(Regr1, Regr2, ID_extended, ID_rs, ID_rt, ID_rd, Controlres[3:0], ID_EX_EXctr, Controlres[5:4], ID_EX_MEMctr, Controlres[7:6], ID_EX_WBctr, ID_EX_r1, ID_EX_r2, ID_EX_rs, ID_EX_rt, ID_EX_rd, ID_EX_extended, clk);

   assign ID_EX_RegWrite = ID_EX_WBctr[0];
   assign ID_EX_MEMRead = ID_EX_MEMctr[1];
   assign ID_EX_ALUSrc = ID_EX_EXctr[1];
   assign ID_EX_RegDst = ID_EX_EXctr[0];
   assign ID_EX_ALUOp = ID_EX_EXctr[3:2];

   MUX_2_1 RegDstMUX(ID_EX_rt, ID_EX_rd, ID_EX_RegDst, EX_regres);
   MUX_4_1 #32 ALUsrcForwardA(ID_EX_r1, ID_EX_r1, EX_MEM_ALUres, MEM_WB_res, ALUsrca, ALUina);
   MUX_4_1 #32 ALUsrcForwardB(ID_EX_r2, ID_EX_r2, EX_MEM_ALUres, MEM_WB_res, ALUsrcb, ALUsrcMUXBin0);
   MUX_2_1 #32 ALUsrcMUXB(ALUsrcMUXBin0, ID_EX_extended, ID_EX_ALUSrc, ALUinb);
   ALU alu(ALUctr, ALUina, ALUinb, Zero, ALUres);
   ALUControl aluControl(ID_EX_extended[5:0], ID_EX_ALUOp, ALUctr);
   EXForward EXF(ID_EX_rs, ID_EX_rt, EX_MEM_RegWrite, EX_MEM_MEMRead, EX_MEM_regres, MEM_WB_RegWrite, MEM_WB_regres, ALUsrca, ALUsrcb);

   // MEM stage
   EX_MEM_Reg EX_MEM_REG (ALUsrcMUXBin0, ID_EX_rs, ID_EX_rt, ID_EX_MEMctr, EX_MEM_MEMctr, ID_EX_WBctr, EX_MEM_WBctr, EX_MEM_r2, EX_MEM_rs, EX_MEM_rt, EX_regres, EX_MEM_regres, ALUres, EX_MEM_ALUres, clk);

   assign EX_MEM_MEMRead = EX_MEM_MEMctr[1];
   assign EX_MEM_MEMWrite = EX_MEM_MEMctr[0];
   assign EX_MEM_RegWrite = EX_MEM_WBctr[0];

   DMEM DM(DMres, EX_MEM_ALUres[6:0], EX_MEM_ALUres[6:0], EX_MEM_MEMWrite, EX_MEM_MEMRead, EX_MEM_r2, mem1, mem2, clk);

   // WB stage
   MEM_WB_Reg MEM_WB_REG(EX_MEM_rs, EX_MEM_rt, {EX_MEM_MEMRead, EX_MEM_WBctr}, MEM_WB_WBctr, MEM_WB_rs, MEM_WB_rt, EX_MEM_regres, MEM_WB_regres, EX_MEM_ALUres, MEM_WB_ALUres, DMres, MEM_WB_MEMres, clk);

   assign MEM_WB_MemtoReg = MEM_WB_WBctr[1];
   assign MEM_WB_RegWrite = MEM_WB_WBctr[0];
   assign MEM_WB_MEMRead = MEM_WB_WBctr[2];

   MUX_2_1 #(32) RegresMUX(MEM_WB_MEMres, MEM_WB_ALUres, MEM_WB_MemtoReg, MEM_WB_res);

endmodule // main
