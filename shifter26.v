module shifter26 (I, Q);
   input [25:0] I;
   output [27:0] Q;

   assign Q = {I,2'b00};

endmodule // shifter26
// module shiftertest;
//    wire [27:0] Q;
//    reg [25:0]  I;
//    shifter26 UUT (I,Q);
//    initial begin
//       #00
//         I = 32'b 11111111111111111111111111;
//       #50
//         $display("%b",Q);
//       $finish;
//    end
// endmodule // shiftertest
