module ysyx_23060111_EXU(
  input[31:0] inst,
  input[31:0] rout1,
  input[31:0] rout2,
  input [31:0] pc,
  output reg[31:0] dnpc,
  input[6:0] opcode,
  input[11:7] rd,
  input[14:12] funct3,
  input[19:15] rs1,
  input[24:20] rs2,
  input[31:25] funct7,
  input[31:0] imm,
  output reg [31:0] wdata,
  output[4:0] waddr,
  output[4:0] raddr1,
  output[4:0] raddr2,
  input [31:0] snpc,
  output  wen,
  output [31:0] m_waddr,
  output [31:0] m_wdata,
  output [31:0] m_wmask,
  output m_wen,
  output [31:0] m_raddr,
  output m_ren,
  output [31:0] m_rdata
);


  assign waddr=rd[11:7]; //R(rd)
  assign raddr1=rs1[19:15]; //src1
  assign raddr2=rs2[24:20]; //src2
/*
  assign wen=1'b1;
*/


ysyx_23060111_ALU ALU_init (inst,opcode,funct3,funct7,imm,rout1,rout2,pc,snpc,dnpc,wen,wdata,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_ren,m_rdata);


/*
 ysyx_23060111_MuxKeyWithDefault #(5, 4, 64 ) i1 ({wdata,dnpc},type_i , {32'b0,snpc}, {
	4'b0001, {pc+imm,snpc},
	4'b0010, {imm,snpc},
	4'b0011, {snpc,pc+imm},
	4'b0100, {rout+imm,snpc},
	4'b0101, {snpc,imm+rout}
  });
  */
/*
  always @(opcode)
	begin
	case(opcode)
	//auipc  UPC
	7'b0010111:begin
 	     wdata=pc+imm;
	     dnpc=snpc;	
	     end
	//lui    U
	7'b0110111:begin
	     wdata=imm;
	     dnpc=snpc;
	     end
	//jal    J
	7'b1101111:begin
	     wdata=snpc;
	     dnpc=pc+imm;
             end
	//addi   I
	7'b0010011:begin
	     wdata=rout1+imm;
	     dnpc=snpc;
	     end
	//jalr   JR
	7'b1100111:begin
	     wdata=snpc;
	     dnpc=imm+rout1;
	     end
	default:begin 
	     wdata=32'h00000000;
	     dnpc=snpc;
	     end 
	endcase
	end
*/











endmodule
  
