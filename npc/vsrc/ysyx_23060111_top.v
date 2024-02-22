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

//reg
  wire[31:0] wdata;
  wire[4:0] waddr;
  wire[4:0] raddr1;
  wire[4:0] raddr2;
  wire wen;
  wire[31:0] rout1;
  wire[31:0] rout2;

//mem
  wire [31:0] m_waddr;
  wire [31:0] m_wdata;
  wire [31:0] m_wmask;
  wire [31:0] m_rdata;
  wire [31:0] m_raddr;
  wire  m_wen; 
  wire  m_ren;



//init pc
ysyx_23060111_pc pc_renew (clk,rst,snpc,dnpc,pc);

//init IFU 取码
ysyx_23060111_IFU init_IFU (clk,pc,inst);

//init reg 
ysyx_23060111_reg #(5,32) reg_$0(clk,wdata,waddr,raddr1,raddr2,wen,rout1,rout2);

 //init IDU 译码
ysyx_23060111_IDU init_IDU (inst,opcode,rd,funct3,rs1,rs2,funct7,imm,inv_flag);

 //init EXU 执行
ysyx_23060111_EXU init_EXU (inst,rout1,rout2,pc,dnpc,opcode,rd,funct3,rs1,rs2,funct7,imm,wdata,waddr,raddr1,raddr2,snpc,wen,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_ren,m_rdata);

//init mem read and write
ysyx_23060111_mem init_mem (clk,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_ren,m_rdata);



endmodule


