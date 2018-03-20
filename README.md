# MIPS 5 Stage Pipeline

Course project 2 for VE370 Introductiont to Computer Organization, instructed by Gang Zheng. This is a xilinx project bundle which is synthesized on xilinx ise 10.14 and unknown version of fpga board.

## Usage

Edit the ```initial begin``` ... ```end``` block in ```IM.v``` to change the test instructions.

## Feature

Basically implemented:
* The memory-reference instructions load word (lw) and store word (sw)
* The arithmetic-logical instructions add, addi, sub, and, andi, or, and slt
* The jumping instructions branch equal (beq), branch not equal (bne), and jump (j)

Some hazards handled by forwarding units (refer to ```EXharzard.v``` and ```IDhazard.v```):
* one-level data hazard
* two-level data hazard
* two-level load use hazard (exclude branch cases)
* two-level branch data hazard
* three-level branch load hazard

Some other hazards handled by stall and transferred to hazards listed above (refer to HazardDetector.v):
* one-level load use hazard -> two-level load use hazard
* one-level branch data hazard -> two-level branch data hazard
* two-level branch load hazard -> three-level branch load hazard
* one-level branch load hazard -> two-level branch load hazard