module ALUControl(funct, ALUOp, Out);
   input [5:0] funct;
   input [1:0] ALUOp;
   output reg [3:0] Out;

   always @(*) begin
      case(ALUOp)
        2'b00: Out = 4'b0010;
        2'b01: Out = 4'b0110;
        2'b10: begin
           case(funct)
             6'b100000: Out = 4'b0010;
             6'b100010: Out = 4'b0110;
             6'b100100: Out = 4'b0000;
             6'b100101: Out = 4'b0001;
             6'b101010: Out = 4'b0111;
             default: Out = 4'b0000;
           endcase // case (funct)
        end
        2'b11: Out = 4'b0000; // for andi
      endcase // case (ALUOp)
   end
endmodule // ALUControl
