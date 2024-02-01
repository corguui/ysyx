import "DPI-C" function int vlg_pmem_read(input int pc);
module ysyx_23060111_IFU(
    input clk,
    input [31:0] pc,
    output reg [31:0] inst
);
    always@(negedge clk) begin
            inst=vlg_pmem_read(pc);
    end


endmodule