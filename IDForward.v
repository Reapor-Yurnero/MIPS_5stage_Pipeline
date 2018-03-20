module IDForward (EX_MEM_regres, MEM_WB_regres, EX_MEM_MEMRead, MEM_WB_MEMRead,EX_MEM_RegWrite, MEM_WB_RegWrite, IF_ID_rs, IF_ID_rt, r1ctrl, r2ctrl);
   input [4:0] EX_MEM_regres, MEM_WB_regres, IF_ID_rs, IF_ID_rt;
   input       EX_MEM_MEMRead, MEM_WB_MEMRead, EX_MEM_RegWrite, MEM_WB_RegWrite;
   output reg [1:0] r1ctrl, r2ctrl;

   // Control signal for comparator source muxes
   // 00 - from reg data
   // 11 - identical to 00
   // 10 - from EX_MEM_ALUres
   // 01 - from MEM_WB_MEMres

   always @(*) begin
      // initialization
      r1ctrl = 2'b00;
      r2ctrl = 2'b00;
      // branch 2 data hazard
      if (EX_MEM_MEMRead != 1'b1 && EX_MEM_RegWrite == 1 && EX_MEM_regres != 5'd0 && IF_ID_rs == EX_MEM_regres) begin
         r1ctrl = 10; // forward from EX_MEM_ALUres
      end
      else if (EX_MEM_MEMRead != 1'b1 && EX_MEM_RegWrite == 1 && EX_MEM_regres != 5'd0 && IF_ID_rt == EX_MEM_regres) begin
         r2ctrl = 10; // forward from EX_MEM_ALUres
      end

      // branch 3 load hazard
      if (MEM_WB_MEMRead == 1'b1 && MEM_WB_RegWrite == 1 && MEM_WB_regres != 5'd0 && MEM_WB_regres == IF_ID_rs) begin
         r1ctrl = 01; // forward from MEM_WB_MEMres
      end
      else if (MEM_WB_MEMRead == 1'b1 && MEM_WB_RegWrite == 1 && MEM_WB_regres != 5'd0 && MEM_WB_regres == IF_ID_rt) begin
         r2ctrl = 01; // forward from MEM_WB_MEMres
      end
   end // always @ (*)

endmodule // IDForward
