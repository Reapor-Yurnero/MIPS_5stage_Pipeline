`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:37 11/23/2017 
// Design Name: 
// Module Name:    display 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module display(clkusr, clk, regsel, modesel, ssdsel, ssddis, reset);
	input clkusr, clk, modesel, reset;
	input [4:0] regsel;
	output [3:0] ssdsel;
	output [6:0] ssddis;
	
	reg [3:0] ssdin;	// input for ssd driver(represent 0 ~ F)
	wire clk_ring;
	wire clk_sec, clk_real; // input for ring counter
	wire [31:0] t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, mem1, mem2; // output of CPU
	wire [31:0] counter;
	wire [6:0]  PCout;
	wire [3:0] R0, R1, R2, R3; // last four heximal number of the display number
	reg [31:0] disp, Reg; // to be displayed data
	
	initial begin
		ssdin = 4'b1111; 
	end

  // aviod metastability of switch
	div_500 #5000000 div_sec(clk_sec, clk, reset);
	sec SEC(clk_sec,counter);
	synchronizer sync(counter,clkusr,clk_real);
	
	main CPU(clk_real, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, PCout, mem1, mem2);
	
	div_500 div(clk_ring,clk,reset); // divide B8 to 500Hz
	
	Ring_counter Ring(clk_ring,reset,ssdsel); // generate flowing of 4 bits for ssd

	// mode selection switch (PC/RegValue)
	always @(*) begin
		case (modesel)
			1'b1: disp = Reg;
			1'b0: disp = {25'b0,PCout};
		endcase
	end
	
	// Reg selection
	always @(*) begin
		case (regsel)
			5'd8: Reg = t0;
			5'd9: Reg = t1;
			5'd10: Reg = t2;
			5'd11: Reg = t3;
			5'd12: Reg = t4;
			5'd13: Reg = t5;
			5'd14: Reg = t6;
			5'd15: Reg = t7;
			5'd16: Reg = s0;
			5'd17: Reg = s1;
			5'd18: Reg = s2;
			5'd19: Reg = s3;
			5'd20: Reg = s4;
			5'd21: Reg = s5;
			5'd22: Reg = s6;
			5'd23: Reg = s7;
			default: Reg = 0;
		endcase
	end
	
	// last four heximal numbers of the data to be displayed
	assign R0 = disp[3:0];
	assign R1 = disp[7:4];
	assign R2 = disp[11:8];
	assign R3 = disp[15:12];

	// generate SSD display info
	SSD_Driver SSD(ssdin, ssddis);
	
	// SSD selection (which to be on)
	always @(*) begin
		case (ssdsel)
			4'b1110: ssdin = R0;
			4'b1101: ssdin = R1;
			4'b1011: ssdin = R2;
			4'b0111: ssdin = R3;
			default: ssdin = 4'b1111;
		endcase
	end
	
endmodule

module div_500(clk_500,clock,reset);
	parameter delay = 10000;
	output reg clk_500;
	input clock,reset;
	reg [31:0] C;
	
	initial begin
		C = 0;
		clk_500 = 0;
	end
	
	always @(posedge clock or posedge reset)begin
		if (reset == 1) C <= 0;
		else  
		begin
			if(C==delay-1)
			begin
			clk_500 <= 1;
			C <= 0;
			end
			else 
			begin 
			clk_500 <= 0;
			C <= C+1;
			end
		end
	end
endmodule

module sec(
	input clk,
	output reg [31:0] counter
);
	
	initial begin
		counter = 0;
	end
	
	always @(posedge clk) begin
		counter <= counter + 1;
	end

endmodule

module synchronizer(
	input [31:0] counter,
	input clkin,
	output reg clk_real
);

	reg [31:0] counter2;
	wire [31:0] diff;
	
	initial begin
		clk_real = 0;
		counter2 = 0;
	end
	
	assign diff = counter - counter2;
	
	always @(clkin) begin
		if (diff > 1) begin
			clk_real = clkin;
			counter2 = counter;
		end
	end
endmodule
