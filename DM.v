module DMEM(R_data, R_addr, W_addr, MemWrite, MemRead, W_data, mem1, mem2);
   parameter addrsize = 7;
   parameter number = 2**(addrsize-2); // 32 entries/words
   input [addrsize-1:0] W_addr, R_addr;
   input [31:0]         W_data;
   input                MemWrite, MemRead;
   output [31:0]        R_data, mem1, mem2;

   reg [31:0]           memory [number-1:0], R_data;

   assign mem1 = memory[1];
   assign mem2 = memory[2];

   always @(MemWrite, W_addr) begin
      if (MemWrite == 1'b1) memory[W_addr[addrsize-1:2]][31:0] = W_data;
   end

   always @(*) begin
      if (MemRead == 1'b1)
        R_data = memory[R_addr[addrsize-1:2]][31:0];
      else
        R_data = 0;
   end

endmodule // DM
