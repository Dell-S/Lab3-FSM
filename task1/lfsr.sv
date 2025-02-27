module lfsr (
    input logic clk, // clock
    input logic rst, // reset, always needed for default state
    input logic en,
    output logic [4:1] data_out // output of shift register
);

    logic[4:1] sreg; // shift register initialisation

always_ff @(posedge clk, posedge rst) // asynchronous reset
    if (rst)
        sreg <= 4'b1;
    else if (en)
        sreg <= {sreg[3:1], sreg[4]^sreg[3]};

assign data_out = sreg;
endmodule
