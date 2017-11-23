module Add4(Q, I);
   parameter number = 7;
   input [number-1:0] I;
   output [number-1:0] Q;
   assign Q = I + 4;
endmodule // Add4
