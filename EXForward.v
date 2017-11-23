module EXForward (ID_EX_rs, ID_EX_rt, EX_MEM_RegWrite, EX_MEM_MEMRead, EX_MEM_regres, MEM_WB_RegWrite, MEM_WB_regres, ALUsrca, ALUsrcb);
   input [4:0] ID_EX_rs, ID_EX_rt, EX_MEM_regres, MEM_WB_regres;
   input       EX_MEM_RegWrite, EX_MEM_MEMRead, MEM_WB_RegWrite;
   output reg [1:0] ALUsrca, ALUsrcb;

   // Control signal for ALU source muxes
   // 00 - from reg data
   // 10 - from EX_MEM_ALUres
   // 11 - from MEM_WB_ALUres or MEM_WB_MEMres
   // 01 - ghost for 00

   always @(*) begin
      // initialzation, use data from reg file
      ALUsrca = 2'b00;
      ALUsrcb = 2'b00;

      // 1 - data hazard, exclude load - use hazard case
      if (EX_MEM_MEMRead != 1'b1 && EX_MEM_RegWrite == 1'b1 && EX_MEM_regres != 5'd0 && EX_MEM_regres == ID_EX_rs) begin
         ALUsrca = 2'b10; // forward from EX_MEM_ALUresult
      end
      // not else if since both case possible
      if (EX_MEM_MEMRead != 1'b1 && EX_MEM_RegWrite == 1'b1 && EX_MEM_regres != 5'd0 && EX_MEM_regres == ID_EX_rt) begin
         ALUsrcb = 2'b10;
      end

      // 2 - data hazard
      if ((MEM_WB_RegWrite == 1'b1 && MEM_WB_regres != 5'd0 && MEM_WB_regres == ID_EX_rs) && (~(EX_MEM_RegWrite == 1'b1 && EX_MEM_regres != 5'd0 && EX_MEM_regres == ID_EX_rs))) begin
         ALUsrca = 2'b11; // forward from MEM_WB_ALUresult or MEM_WB_MEMresult
      end
      if ((MEM_WB_RegWrite == 1'b1 && MEM_WB_regres != 5'd0 && MEM_WB_regres == ID_EX_rt) && (~(EX_MEM_RegWrite == 1'b1 && EX_MEM_regres != 5'd0 && EX_MEM_regres == ID_EX_rt))) begin
         ALUsrcb = 2'b11;
      end

      // load - use hazard
      // 2 - case covered by 2 - data hazard
      // 1 - case detected by HazardDetector and stall thus transferred to 2 case

   end // always @ (*)

endmodule // EXForward

