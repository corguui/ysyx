module ysyx_23060111_reg #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  input wen,
  output reg [DATA_WIDTH-1:0] rout1,
  output reg [DATA_WIDTH-1:0] rout2
 
);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  assign rout1=rf[raddr1];
  assign rout2=rf[raddr2];

  always @(posedge clk) begin
    if (wen&&waddr!=0)begin
       rf[waddr] <= wdata;
    end
  end
endmodule
