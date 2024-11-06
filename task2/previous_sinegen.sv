module sinegen #(
    parameter   A_WIDTH = 8,
                D_WIDTH = 8
)(
    // interface signals
    input logic                 clk,    //clock
    input logic                 rst,    //reset
    input logic                 en,     //enable
    input logic [A_WIDTH-1:0]   offest, //offset for second wave
    input logic [D_WIDTH-1:0]   incr,   //increment for addr counter
    output logic [D_WIDTH-1:0]  dout1,  //wave data for 1
    output logic [D_WIDTH-1:0]  dout2   //wave data for 2
);

    logic   [A_WIDTH-1:0]       address;//interconnect wire

counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address)
);

rom sineRom (
    .clk (clk),
    .addr (address1),
    .dout (dout1)
);

rom sineRom2 (
    .clk (clk),
    .addr (address2),
    .dout (dout2)
);

endmodule
