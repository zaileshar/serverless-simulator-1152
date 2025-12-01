module spi_fifo #(parameter DEPTH=16) (
    input clk, rst, wr_en, rd_en,
    input [7:0] din,
    output [7:0] dout,
    output full, empty
);
    reg [7:0] mem [0:DEPTH-1];
    reg [3:0] wptr, rptr;
    always @(posedge clk) if (wr_en && !full) mem[wptr] <= din;
    assign dout = mem[rptr];
    assign full = (wptr + 1'b1 == rptr);
    assign empty = (wptr == rptr);
endmodule