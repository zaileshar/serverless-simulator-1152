module fifo_alu (
    input [15:0] a,
    input [15:0] b,
    input [2:0] op,
    output reg [15:0] result
);
    always @(*) begin
        case(op)
            3'b000: result = a + b;
            3'b001: result = a - b;
            3'b010: result = a & b;
            3'b011: result = a | b;
            default: result = 16'h0;
        endcase
    end
endmodule