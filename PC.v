module PCReg(I, Q, clk, hold);
   input clk, hold;
   input [6:0] I;
   output reg [6:0] Q;

   initial begin
      Q = 0;
   end

   always @(posedge clk) begin
      if (hold == 1'b1) begin
      end
      else begin
        Q <= I;
      end
   end

endmodule // PC
