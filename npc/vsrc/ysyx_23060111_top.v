//import "DPI-C" function void ebreak(input int inst);
module ysyx_23060111_top(
  input       rst,
  input       clk,
  output [31:0] pc,
  output inv_flag//invalid_opcode
  
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
  wire[3:0] type_i;
  wire[31:0] imm;

//reg
  wire[31:0] wdata;
  wire[4:0] waddr;
  wire[4:0] raddr;
  wire wen;
  wire[31:0] rout;

//mem
  wire [31:0] m_waddr;
  wire [31:0] m_wdata;
  wire [31:0] m_wmask;
  wire [31:0] m_rdata;
  wire [31:0] m_raddr;
  wire  m_wen; 
  assign m_waddr=32'h80000040;
  assign m_wdata=32'h00009117;
  assign m_wen=1;
  assign m_wmask=32'd4;
  assign m_raddr=32'h80000004;
//init pc
ysyx_23060111_pc pc_renew (clk,rst,snpc,dnpc,pc);

//init IFU
ysyx_23060111_IFU init_IFU (clk,pc,inst);

//init reg
ysyx_23060111_reg #(5,32) reg_$0(clk,wdata,waddr,raddr,wen,rout);

 //init IDU
ysyx_23060111_IDU init_IDU (inst,opcode,rd,funct3,rs1,rs2,funct7,type_i,imm,inv_flag);

 //init EXU
ysyx_23060111_EXU init_EXU (rout,pc,dnpc,opcode,rd,funct3,rs1,rs2,funct7,type_i,imm,wdata,waddr,raddr,snpc,wen);

//init mem
ysyx_23060111_mem init_the_mem (clk,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_rdata);



endmodule


