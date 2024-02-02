import "DPI-C" function int vlg_pmem_read(input int pc,input int flag);
module ysyx_23060111_IFU(
    input clk,
    input [31:0] pc,
    output reg [31:0] inst
);
    wire [31:0] flag;
    assign flag=32'd0;
    always@(negedge clk) begin
            inst=vlg_pmem_read(pc,flag);
    end


endmodule