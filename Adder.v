module Adder(Q, I0, I1);
   parameter size = 32;
   input [size-1:0] I0, I1;
   output [size-1:0] Q;

   assign Q = I0 + I1;

endmodule // Adder
