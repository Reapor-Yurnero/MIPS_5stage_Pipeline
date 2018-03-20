module DMEM(R_data, R_addr, W_addr, MemWrite, MemRead, W_data, mem1, mem2, clk);
   parameter addrsize = 7;
   parameter number = 2**(addrsize-2); // 32 entries/words
   input [addrsize-1:0] W_addr, R_addr;
   input [31:0]         W_data;
   input                MemWrite, MemRead, clk;
   output [31:0]        R_data, mem1, mem2;

   reg [31:0]           memory [number-1:0];
	//reg [31:0]				R_data;

   assign mem1 = memory[1];
   assign mem2 = memory[2];

   always @(negedge clk) begin //MemWrite, W_addr
      if (MemWrite == 1'b1) memory[W_addr[addrsize-1:2]][31:0] = W_data;
		else ;
   end

	assign R_data = memory[R_addr[addrsize-1:2]][31:0];

endmodule // DM
