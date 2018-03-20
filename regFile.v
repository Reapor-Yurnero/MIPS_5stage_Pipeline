module regFile (R_data1, R_data2, W_data, W_addr, R_addr1, R_addr2, RegWrite, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, clk);
   parameter width = 32;
   parameter addr_width = 5;
   parameter number = 2**addr_width; // 32 entries' Reg File

   output [width-1:0] R_data1, R_data2;
   input [width-1:0]  W_data;
   input [addr_width-1:0] W_addr, R_addr1, R_addr2;
   input                  RegWrite, clk;
   output [width-1:0]       t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7;
   reg [width-1:0]    memory [number-1:0];

   initial begin
      memory[31] = 0;
      memory[30] = 0;
      memory[29] = 0;
      memory[28] = 0;
      memory[27] = 0;
      memory[26] = 0;
      memory[25] = 0;
      memory[24] = 0;
      memory[23] = 0;
      memory[22] = 0;
      memory[21] = 0;
      memory[20] = 0;
      memory[19] = 0;
      memory[18] = 0;
      memory[17] = 0;
      memory[16] = 0;
      memory[15] = 0;
      memory[14] = 0;
      memory[13] = 0;
      memory[12] = 0;
      memory[11] = 0;
      memory[10] = 0;
      memory[9] = 0;
      memory[8] = 0;
      memory[7] = 0;
      memory[6] = 0;
      memory[5] = 0;
      memory[4] = 0;
      memory[3] = 0;
      memory[2] = 0;
      memory[1] = 0;
      memory[0] = 0;
   end

   assign t0 = memory[8];
   assign t1 = memory[9];
   assign t2 = memory[10];
   assign t3 = memory[11];
   assign t4 = memory[12];
   assign t5 = memory[13];
   assign t6 = memory[14];
   assign t7 = memory[15];
   assign s0 = memory[16];
   assign s1 = memory[17];
   assign s2 = memory[18];
   assign s3 = memory[19];
   assign s4 = memory[20];
   assign s5 = memory[21];
   assign s6 = memory[22];
   assign s7 = memory[23];

	assign R_data1 = memory[R_addr1];
	assign R_data2 = memory[R_addr2];
	
   always @(negedge clk) begin
      if (RegWrite == 1'b1 && W_addr != 5'd0) memory[W_addr] = W_data;
		else ;
   end

endmodule
