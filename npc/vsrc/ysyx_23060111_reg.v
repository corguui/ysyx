module ysyx_23060111_reg #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [1:0] csr_waddr,
  input [DATA_WIDTH-1:0] csr_wdata,
  input [ADDR_WIDTH-1:0] csr_mcause_wdata,
  input [ADDR_WIDTH-1:0] csr_mepc_wdata,
  input [ADDR_WIDTH-1:0] csr_mstatus_wdata,
  input [1:0] csr_raddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  input wen,
  input csr_wen,
  input csr_mcause_wen,
  input csr_mepc_wen,
  input csrr_mstatus_wen,
  output reg [DATA_WIDTH-1:0] rout1,
  output reg [DATA_WIDTH-1:0] rout2,
  output reg [DATA_WIDTH-1:0] csr_a5,
  output reg [DATA_WIDTH-1:0] csrr_mtvec,
  output reg [DATA_WIDTH-1:0] csrr_mepc,
  output reg [DATA_WIDTH-1:0] csrr_mstatus,
  output reg [DATA_WIDTH-1:0] csr_rout
 
);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  //CSR
  reg [DATA_WIDTH-1:0] csr [3:0];

  assign csr_a5=rf[2**ADDR_WIDTH-17];
  assign csrr_mtvec=csr[3];
  assign csrr_mepc=csr[0];
  assign csrr_mstatus=csr[2];
  assign csr_rout=csr[csr_raddr];


  assign rout1=rf[raddr1];
  assign rout2=rf[raddr2];



  always @(posedge clk) begin
    if (wen&&waddr!=0)begin
       rf[waddr] <= wdata;
    end
    if (csr_wen!=0)begin
       csr[csr_waddr] <= csr_wdata;
    end
    if (csr_mcause_wen!=0)begin
       csr[1] <= csr_mcause_wdata;
    end
    if (csr_mepc_wen!=0)begin
       csr[0] <= csr_mepc_wdata;
    end
    if (csrr_mstatus_wen!=0)begin
       csr[2] <= csr_mstatus_wdata;
    end
  end
endmodule
