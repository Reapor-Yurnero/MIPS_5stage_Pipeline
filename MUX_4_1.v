module MUX_4_1(I0, I1, I2, I3, Sel, Out);
   parameter size = 32;
   input [size-1:0] I0,I1,I2,I3;
   input [1:0]      Sel;
   output reg [size-1:0] Out;

   always @(*) begin
      case (Sel)
        2'b00: Out = I0;
        2'b01: Out = I1;
        2'b10: Out = I2;
        2'b11: Out = I3;
      endcase // case (Sel)
   end
endmodule // MUX_4_1
