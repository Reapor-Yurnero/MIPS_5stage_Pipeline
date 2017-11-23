module EX_MEM_Reg (r2in, rsin, rtin, MEMin, MEM, WBin, WB, r2, rs, rt, regresin, regres, ALUresin, ALUres, clk);
   input [1:0] MEMin, WBin; // contains MEMRead, MEMWrite // contains MemtoReg, RegWrite
   input [31:0] r2in, ALUresin;
   input [4:0]  rsin, rtin, regresin;
   input        clk;
   output reg [1:0] MEM, WB;
   output reg [31:0] r2, ALUres;
   output reg [4:0]  rs, rt, regres;

   always @ (posedge clk) begin
      MEM <= MEMin;
      WB <= WBin;
      r2 <= r2in;
      rs <= rsin;
      rt <= rtin;
      regres <= regresin;
      ALUres <= ALUresin;
   end
endmodule // EX_MEM_Reg
