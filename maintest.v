module maintest();
   wire [31:0] t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, mem1, mem2;
   reg         clk;
   reg [6:0]   count;
   wire [6:0]  PCout;
   initial begin
      $dumpfile("test.lxt");
      $dumpvars(0, maintest);

      $display("****************************");
      $monitor("Time:", $time,, "Clk = %d PC = %h \n[t0] = %h, [t1] = %h, [t2] = %h\n[t3] = %h, [t4] = %h, [t5] = %h\n[t6] = %h, [t7] = %h, [s0] = %h\n[s1] = %h, [s2] = %h, [s3] = %h\n[s4] = %h, [s5] = %h, [s6] = %h\n[s7] = %h", count, PCout, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7);
      #0 clk = 0; count = 0;
   end

   main UUT (clk, t0, t1, t2, t3, t4, t5, t6, t7, s0, s1, s2, s3, s4, s5, s6, s7, PCout, mem1, mem2);
   always begin
      #10 clk = ~clk;
      if (clk == 1'b1) count = count + 1;
   end

   initial #590 $finish;
endmodule // maintest
