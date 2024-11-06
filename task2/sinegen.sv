module sinegen #(
    parameter   A_WIDTH = 8,
                D_WIDTH = 8
)(
    // interface signals
    input logic                 clk,    //clock
    input logic                 rst,    //reset
    input logic                 en,     //enable
    input logic [A_WIDTH-1:0]   offset,  //offset
    input logic [D_WIDTH-1:0]   incr,   //increment for addr counter
    output logic [D_WIDTH-1:0]  dout1,    //output data for wave1
    output logic [D_WIDTH-1:0]  dout2    //output data for wave2

);

    logic   [A_WIDTH-1:0]       address;//interconnect wire


counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address)
);

rom2ports sineRom2ports (
    .clk (clk),
    .addr1 (address),
    .addr2 (offset),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
