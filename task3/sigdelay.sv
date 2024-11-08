module sigdelay #(
    parameter   A_WIDTH = 9,
                D_WIDTH = 8
) (
    // interface signals
    input logic                 clk,    //clock
    input logic                 rst,    //counter reset
    input logic                 en,     //counter enable
    input logic                 wr_en,  //RAM writing enable
    input logic                 rd_en,  //RAM reading enable
    input logic [A_WIDTH-1:0]   din,    //voice we gengerated
    input logic [A_WIDTH-1:0]   offset, //offset
    input logic [D_WIDTH-1:0]   incr,   //increment for addr counter
    output logic [D_WIDTH-1:0]  dout,   //output data after delay

);

    logic   [A_WIDTH-1:0]       address;//interconnect wire


counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address)
);

ram2ports voiceRam2ports (
    .clk (clk),
    .wr_addr (address+offest),
    .rd_addr (address),
    .dout (dout),
    .din (din),
    .wr_en(wr_en),
    .rd_en(rd_en)
);

endmodule
