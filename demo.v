div_500(.clk_500(clk_500),.clock(clock),.reset); //clock is FPGA clock.
Ring_counter(.clk(clk_500),.reset(reset),.Q(Q));
out_choose(.b(b),.c(c),.d(d),.e(e),.f(f),.data_1(data_1),.data_2(data_2),.data_3(data_3),.data_4(data_4),.data_5(data_5),.out(a_in));//b,c,d,e,f are input (switch)
ssd_driver(.in(a_in),.out(a_out));
chathode_choose(.in(a_in),.AN(Q),.CA(CA));//CA and AN is output
module div_500(clk_500,clock,reset);
	output clk_500;
	input clock,reset;
	reg clk_500;
	reg [16:0] C;
	
	always @(posedge clock or posedge reset)begin
		if (reset == 1) C <= 0;
		else  
		begin
			if(C==99999)
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

module Ring_counter(clk,reset,Q);
	input clk,reset;
	output [3:0]Q;
	reg [3:0]Q;
	
	always @(posedge clk or posedge reset)
		if(reset == 1) Q<=4'b1110;
		else
		begin
			Q[3] <= Q[0];
			Q[2] <= Q[3];
			Q[1] <= Q[2];
			Q[0] <= Q[1];
		end
	end
endmodule		

module out_choose(b,c,d,e,f,data_1,data_2,data_3,data_4,data_5,out);
	input b,c,d,e,f;
	input [15:0]data_1,data_2,data_3,data_4,data_5;
	output [15:0] out;
	reg [15:0] out;
	
	always@(posedge b or posedge c or posedge d or posedge e or posedge f)
	begin
		if(b==1) out <= data_1;
		else if(c==1) out <= data_2;
		else if(d==1) out <= data_3;
		else if(e==1) out <= data_4;
		else if(f==1) out <= data_5;
	end
	

module ssd_driver(in,out);
	input [3:0]in;
	output [6:0] out;
	reg [6:0] out;
	always @(in)
	begin
		case(in)
		0:out=7'b0000001;
		1:out=7'b1001111;
		2:out=7'b0010010;
		3:out=7'b0000110;
		4:out=7'b1001100;
		5:out=7'b0100100;
		6:out=7'b0100000;
		7:out=7'b0001111;
		8:out=7'b0000000;
		9:out=7'b0000100;
		10:out=7'b0001000;
		11:out=7'b1100000;
		12:out=7'b0110001;
		13:out=7'b1000010;
		14:out=7'b0110000;
		15:out=7'b0111000;
		default out = 7'b1111111;
		endcase
	end
endmodule

module chathode_choose(in,AN,CA);
	input [15:0]in;
	input [3:0]AN;
	output [6:0]CA;
	assign CA = (AN==4'b1110)?[3:0]in:7'b1111111;
	assign CA = (AN==4'b1101)?[7:4]in:7'b1111111;
	assign CA = (AN==4'b1011)?[11:8]in:7'b1111111;
	assign CA = (AN==4'b0111)?[15:12]in:7'b1111111;
endmodule
