import "DPI-C" function void vlg_pmem_write(
  input int waddr, input int wdata, input int wmask);
module ysyx_23060111_mem(
    input clk,
    input [31:0] waddr,
    input [31:0] wdata,
    input [31:0] wmask,
    input wen,
    input [31:0] raddr,
    output [31:0] rdata

); 
    assign rdata =vlg_pmem_read(raddr);
    always@(posedge clk)
    begin
        if(wen)
        begin
            vlg_pmem_write(waddr,wdata,wmask);
        end
    end

endmodule