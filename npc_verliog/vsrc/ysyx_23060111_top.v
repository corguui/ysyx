//import "DPI-C" function void ebreak(input int inst);
module ysyx_23060111_top(
  input       rst,
  input       clk,
  output [31:0] pc,
  output inv_flag//invalid_opcode (when can't find the type)
  
 );
  wire [31:0]inst;
//pc
  wire[31:0] dnpc;
  wire[31:0] snpc;

//IDU
  wire[6:0] opcode;
  wire[11:7] rd;
  wire[14:12] funct3;
  wire[19:15] rs1;
  wire[24:20] rs2;
  wire[31:25] funct7;
  wire[31:0] imm;
  wire[31:0] csr_imm;

//reg
  wire[31:0] wdata;
  wire[4:0] waddr;
  wire[4:0] raddr1;
  wire[4:0] raddr2;
  wire wen;
  wire[31:0] rout1;
  wire[31:0] rout2;
  //csr
  wire[1:0] csr_waddr;
  wire[31:0] csr_wdata;
  wire[1:0] csr_raddr;
  wire csr_wen;
  wire csr_mepc_wen;
  wire csr_mcause_wen;
  wire csr_mstatus_wen;
  wire[31:0] csr_rout;
  wire[31:0] csr_a5;
  wire[31:0] csrr_mepc;
  wire[31:0] csrr_mstatus;
  wire[31:0] csrr_mtvec;
  wire[31:0] csr_mcause_wdata;
  wire[31:0] csr_mepc_wdata;
  wire[31:0] csr_mstatus_wdata;


//mem
  wire [31:0] m_waddr;
  wire [31:0] m_wdata;
  wire [31:0] m_wmask;
  wire [31:0] m_rdata;
  wire [31:0] m_raddr;
  wire [31:0] m_rmask;
  wire  m_wen; 
  wire  m_ren;



//init pc
ysyx_23060111_pc pc_renew (clk,rst,snpc,dnpc,pc);

//init IFU 取码
ysyx_23060111_IFU init_IFU (clk,pc,inst);

 //init IDU 译码
ysyx_23060111_IDU init_IDU (inst,opcode,rd,funct3,rs1,rs2,funct7,imm,csr_imm,inv_flag);

 //init EXU 执行
ysyx_23060111_EXU init_EXU (rout1,rout2,pc,dnpc,opcode,rd,funct3,rs1,rs2,funct7,imm,csr_imm,wdata,waddr,raddr1,raddr2,snpc,wen,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_rmask,m_ren,m_rdata,csr_rout,csr_a5,csr_wdata,csr_waddr,csr_raddr,csrr_mepc,csrr_mtvec,csrr_mstatus,csr_mepc_wdata,csr_mcause_wdata,csr_mstatus_wdata,csr_mepc_wen,csr_mcause_wen,csr_mstatus_wen,csr_wen);

//init reg 
ysyx_23060111_reg #(5,32) reg_$0(clk,wdata,waddr,csr_waddr,csr_wdata,csr_mcause_wdata,csr_mepc_wdata,csr_mstatus_wdata,csr_raddr,raddr1,raddr2,wen,csr_wen,csr_mcause_wen,csr_mepc_wen,csr_mstatus_wen,rout1,rout2,csr_a5,csrr_mtvec,csrr_mepc,csrr_mstatus,csr_rout);

//init mem read and write
ysyx_23060111_mem init_mem (clk,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_rmask,m_ren,m_rdata);


endmodule


