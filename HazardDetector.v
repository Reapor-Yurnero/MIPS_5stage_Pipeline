module HazardDetecter (ID_EX_MEMRead, ID_EX_regres, ID_EX_RegWrite, EX_MEM_MEMRead, EX_MEM_regres, EX_MEM_RegWrite, MEM_WB_RegWrite, MEM_WB_MEMRead, MEM_WB_regres, IF_ID_rs, IF_ID_rt, ID_Branch, stall);
   input       ID_EX_MEMRead, EX_MEM_MEMRead, MEM_WB_MEMRead, EX_MEM_RegWrite, MEM_WB_RegWrite, ID_EX_RegWrite, ID_Branch; // ID_Branch = ID_BranchNE | ID_BranchEQ
   input [4:0] ID_EX_regres, EX_MEM_regres, MEM_WB_regres, IF_ID_rs, IF_ID_rt;
   output reg  stall;

   always @(*) begin
      // initialization
      stall = 1'b0;
      // load - use 1 hazard (exclude branch cases)
      if (ID_Branch == 1'b0 && ID_EX_MEMRead == 1'b1 && ID_EX_RegWrite == 1'b1 && ID_EX_regres != 5'd0 && (ID_EX_regres == IF_ID_rs | ID_EX_regres == IF_ID_rt)) begin
         stall = 1'b1; // stall one cycle will turn to load - use 2 hazard && h&&led by EXF||ward unit
      end
      // branch 1 data hazard
      else if (ID_Branch == 1'b1 && ID_EX_MEMRead == 1'b0 && ID_EX_RegWrite == 1'b1 && ID_EX_regres != 5'd0 && (ID_EX_regres == IF_ID_rs || ID_EX_regres == IF_ID_rt)) begin
         stall = 1'b1; // stall one cylcle will turn to branch 2 data hazard && h&&led by IDF||ward unit
      end
      // branch 2 load hazard
      else if (ID_Branch == 1'b1 && EX_MEM_MEMRead == 1'b1 && EX_MEM_RegWrite == 1'b1 && EX_MEM_regres != 5'd0 && (EX_MEM_regres == IF_ID_rs || EX_MEM_regres == IF_ID_rt)) begin
         stall = 1'b1; // stall one cycle will turn to branch 3 load hazard && h&&led by IDF||ward unit
      end
      // branch 1 load hazard
      else if (ID_Branch == 1'b1 && ID_EX_MEMRead == 1'b1 && ID_EX_RegWrite == 1'b1 && ID_EX_regres != 5'd0 && (ID_EX_regres == IF_ID_rs || ID_EX_regres == IF_ID_rt)) begin
         stall = 1'b1; // stall one cycle will turn to branch 2 load hazard case
      end
   end // always @ (*)

endmodule // HazardDetecter

