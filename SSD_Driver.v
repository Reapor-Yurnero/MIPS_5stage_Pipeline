`ifndef _SSD_Driver
`define _SSD_Driver

module SSD_Driver(I,Q);
    output [6:0] Q;
    input [3:0] I;
    reg [6:0] Q;
    always @(I) begin
        case (I)
            4'h0: Q = 7'b1000000;
            4'h1: Q = 7'b1111001;
            4'h2: Q = 7'b0100100;
            4'h3: Q = 7'b0110000;
            4'h4: Q = 7'b0011001;
            4'h5: Q = 7'b0010010;
            4'h6: Q = 7'b0000010;
            4'h7: Q = 7'b1111000;
            4'h8: Q = 7'b0000000;
            4'h9: Q = 7'b0010000;
            4'ha: Q = 7'b0001000;
            4'hb: Q = 7'b0000011;
            4'hc: Q = 7'b1000110;
            4'hd: Q = 7'b0100001;
            4'he: Q = 7'b0000110;
            4'hf: Q = 7'b0001110;
            default Q = 7'b1111111;
        endcase
    end
endmodule

`endif
