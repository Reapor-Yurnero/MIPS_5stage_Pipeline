`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:39 11/23/2017 
// Design Name: 
// Module Name:    ringcounter 
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
module Ring_counter(clk,reset,Q);
	input clk,reset;
	output [3:0]Q;
	reg [3:0]Q;
	
	initial begin
		Q = 4'b1110;
	end
	
	always @(posedge clk or posedge reset) begin
		if(reset == 1) Q<=4'b1110;
		else begin
			Q[3] <= Q[0];
			Q[2] <= Q[3];
			Q[1] <= Q[2];
			Q[0] <= Q[1];
		end
	end
endmodule