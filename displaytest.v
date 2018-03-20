`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:38:49 11/23/2017 
// Design Name: 
// Module Name:    displaytest 
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
module displaytest();
	reg clkusr, clk, modesel, reset;
	reg [4:0] regsel;
	wire [3:0] ssdsel;
	wire [6:0] ssddis;
	
	display UUT(clkusr, clk, regsel, modesel, ssdsel, ssddis, reset);
	
	initial begin
		#0 clk = 0; clkusr = 0; reset = 0; modesel = 0; regsel = 5'b0000;
		//#1000 modesel = 1; regsel = 5'd16;
		//#420 regsel = 5'd8;
	end
	
	always #100 clkusr = ~clkusr;
	always #1 clk = ~clk;
	
	initial #10000 $stop;

endmodule
