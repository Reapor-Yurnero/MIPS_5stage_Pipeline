module test();
   wire [31:0] r1, r2;
   reg [31:0]  wd;
   reg [4:0] wa, a1, a2;
   reg       en, clk;

   regFile UUT (r1, r2, wd, wa, a1, a2, en, clk);

   initial begin
      #0
        clk = 1;
      #80
      wd = 32'hFFFF;
      wa = 5'd0;
      a1 = 5'd0;
      a2 = 5'd0;
      en = 1'b1;
      #100
        $display("r1 = %b, r2 = %b", r1, r2);
      wd = 32'hFFF0;
      wa = 5'd2;
      a1 = 5'd0;
      a2 = 5'd2;
      en = 1'b1;
      #100
        $display("r1 = %b, r2 = %b", r1, r2);
      wd = 32'h1000;
      wa = 5'd1;
      a1 = 5'd2;
      a2 = 5'd1;
      en = 1'b1;
      #100
        $display("r1 = %b, r2 = %b", r1, r2);
   end // initial begin

   always #50 clk = ~clk;

   initial #1000 $finish;

endmodule // test
