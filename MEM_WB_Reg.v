module MEM_WB_Reg (rsin, rtin, WBin, WB, rs, rt, regresin, regres, ALUresin, ALUres, MEMresin, MEMres, clk);
   input clk;
   input [2:0]  WBin;
   input [31:0] ALUresin, MEMresin;
   input [4:0]  rsin, rtin, regresin;
   output reg [2:0] WB; //contains MEMtoReg, MEMRead and RegWrite
   output reg [31:0] MEMres, ALUres;
   output reg [4:0]  rs, rt, regres;

   always @ (posedge clk) begin
      WB <= WBin;
      rs <= rsin;
      rt <= rtin;
      regres <= regresin;
      ALUres <= ALUresin;
      MEMres <= MEMresin;
   end

endmodule // MEM_WB_Reg
