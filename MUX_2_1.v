module MUX_2_1(I0, I1, Sel, Out);
   parameter size = 5;
   input [size-1:0] I0,I1;
   input       Sel;
   output reg [size-1:0] Out;

   always @(*) begin
      case (Sel)
        1'b0: Out = I0;
        1'b1: Out = I1;
        default Out = 0;
      endcase // case (Sel)
   end
endmodule // MUX_2_1
