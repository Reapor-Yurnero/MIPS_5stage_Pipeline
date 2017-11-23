module IF_ID_Reg(PC4in, PC4, Iin, I, clk, flush, hold);
   input clk, flush, hold;
   input [6:0] PC4in;
   input [31:0] Iin;
   output reg [6:0] PC4;
   output reg [31:0] I;

   initial begin
      I = 0;
   end

   always @ (posedge clk) begin
      if (flush == 1'b1) begin
         PC4 <= 7'b0;
         I <= 32'b0;
      end
      else if (hold == 1'b1) begin
      end
      else begin
         PC4 <= PC4in;
         I <= Iin;
      end
   end

endmodule // IF_ID_Reg
