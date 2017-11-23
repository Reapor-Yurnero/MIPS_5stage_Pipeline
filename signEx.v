module signEx(I,Q);
   input [15:0] I;
   output [31:0] Q;
   assign Q = {{16{I[15]}},I[15:0]};
endmodule // signEx
