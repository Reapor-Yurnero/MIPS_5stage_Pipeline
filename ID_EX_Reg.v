module ID_EX_Reg (r1in, r2in, extendedin, rsin, rtin, rdin, EXin, EX, MEMin, MEM, WBin, WB, r1, r2, rs, rt, rd, extended, clk);
   input [3:0] EXin; // ALUOp, ALUSrc, RegDst
   input [1:0] MEMin, WBin; // MEMRead, MEMWrite // RegWrite MemtoReg
   input [31:0] r1in, r2in, extendedin;
   input [4:0]  rsin, rtin, rdin;
   input        clk;
   output reg [3:0]  EX;
   output reg [1:0]  MEM, WB;
   output reg [31:0] r1, r2, extended;
   output reg [4:0]  rs, rt, rd;

   always @ (posedge clk) begin
      EX <= EXin;
      MEM <= MEMin;
      WB <= WBin;
      r1 <= r1in;
      r2 <= r2in;
      extended <= extendedin;
      rs <= rsin;
      rd <= rdin;
      rt <= rtin;
   end

endmodule // ID_EX_Reg
