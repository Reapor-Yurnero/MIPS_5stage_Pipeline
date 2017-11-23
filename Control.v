module Control(Opcode, RegDST, BranchEQ, BranchNE, MemRead, MemWrite, MemtoReg, ALUOp, ALUSrc, RegWrite, Jump);
   input [5:0] Opcode;
   output reg  RegDST, BranchEQ, BranchNE, MemRead, MemWrite, MemtoReg, ALUSrc, RegWrite, Jump;
   output reg [1:0] ALUOp;

   always @(*) begin
      // Initialize default case for R-type instruction
      RegDST = 1'b1; // use $rd
      BranchEQ = 1'b0; // no branch
      BranchNE = 1'b0;
      MemRead = 1'b0; // no mem operation
      MemWrite = 1'b0;
      MemtoReg = 1'b1; // write back from ALU result directly
      ALUSrc = 1'b0; // ALU source from regfile
      RegWrite = 1'b1; // do reg write
      ALUOp = 2'b10;
      Jump = 1'b0; // no jump

      case (Opcode)
        6'h23: begin
           // lw: I-type, lw $rt, I($rs)
           RegDST = 1'b0; // $rt
           MemRead = 1'b1;
           MemtoReg = 1'b0; // from mem
           ALUSrc = 1'b1; // from I(extended)
           ALUOp = 2'b00;
           //RegWrite = 1'b1;
           // RegDST = 1'b1; // use $rs
           // BranchEQ = 1'b0; // no branch
           // BranchNE = 1'b0;
           // MemRead = 1'b0; // no mem operation
           // MemWrite = 1'b0;
           // MemtoReg = 1'b1; // write back from ALU result directly
           // ALUSrc = 1'b0; // ALU source from regfile
           // RegWrite = 1'b1; // do reg write
           // ALUOp = 2'b10;
           // Jump = 1'b0; // no jump
        end
        6'h2b: begin
           // sw: I-type
           MemWrite = 1'b1;
           ALUSrc = 1'b1;
           ALUOp = 2'b00;
           RegWrite = 1'b0; // no reg write
        end
        6'h0: begin
           // normal R-type, including add, sub, and, or, slt
           // covered by initialization
        end
        6'h8: begin
           // addi: I-type
           RegDST = 1'b0; // destination $rt
           ALUOp = 2'b00; // ALU will do add anyway
           ALUSrc = 1'b1; // read from constant
        end
        6'hc: begin
           // andi
           RegDST = 1'b0; // destination $rt
           ALUOp = 2'b11; // special for andi, defined in ALUcontrol
           ALUSrc = 1'b1; // read from constant
        end
        6'h4: begin
           // beq: I-type, handle in ID stage
           // RegDST = 1'b1; // use $rs
           BranchEQ = 1'b1; // no branch
           //BranchNE = 1'b0;
           //MemRead = 1'b0; // no mem operation
           //MemWrite = 1'b0;
           //MemtoReg = 1'b1; // write back from ALU result directly
           //ALUSrc = 1'b0; // ALU source from regfile
           RegWrite = 1'b0; // do no reg write
           //ALUOp = 2'b10;
           //Jump = 1'b0; // no jump
        end // case: 6'h4
        6'h5: begin
           // bne: I-type
           BranchNE = 1'b1;
           RegWrite = 1'b0;
        end
        6'h2: begin
           // J: J-format
           // RegDST = 1'b1; // use $rs
           // BranchEQ = 1'b0; // no branch
           // BranchNE = 1'b0;
           // MemRead = 1'b0; // no mem operation
           // MemWrite = 1'b0;
           // MemtoReg = 1'b1; // write back from ALU result directly
           // ALUSrc = 1'b0; // ALU source from regfile
           RegWrite = 1'b0; // do reg write
           // ALUOp = 2'b10;
           Jump = 1'b1; // no jump
        end // case: 6'h2
        default: begin
        end
      endcase // case (Opcode)
   end // always @ (*)

endmodule // Control
