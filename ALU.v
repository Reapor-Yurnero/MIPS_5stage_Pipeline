module ALU(ALUControl, I0, I1, Zero, ALUResult);
   input [31:0] I0,I1;
   input [3:0]  ALUControl;
   output       Zero;
   output [31:0] ALUResult;
   reg [31:0]    ALUResult;

   wire [31:0]   Diff;
   wire          subof;

   assign Zero = (ALUResult == 0);
   assign Diff = I0 - I1;
   assign subof = (I0[31]^I1[31] == 1'b1 && Diff[31] != I0[31]) ? 1 : 0;

   always @(*) begin
      case (ALUControl)
        4'b0000: ALUResult = I0 & I1; // and
        4'b0001: ALUResult = I0 | I1; // or
        4'b0010: ALUResult = I0 + I1; // add
        4'b0110: ALUResult = I0 - I1; // minus
        4'b0111: ALUResult = (subof == 1) ? {{31{1'b0}},~Diff[31]} : {{31{1'b0}},Diff[31]}; // slt
        4'b1100: ALUResult = ~(I0 | I1); // Nor
        default: ALUResult = 0;
      endcase // case (ALUControl)
   end // always @ (*)

endmodule // ALU
