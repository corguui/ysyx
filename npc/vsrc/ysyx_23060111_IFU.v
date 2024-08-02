import "DPI-C" function int vlg_pc_read(input int pc);
module ysyx_23060111_IFU(
    input clk,
    input [31:0] pc,
    output reg [31:0] inst
);
    always@(posedge clk) begin
            inst=vlg_pc_read(pc);
    end


endmodule