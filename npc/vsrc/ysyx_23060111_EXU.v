module ysyx_23060111_EXU(
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
  input[31:0] csr_imm,
  output reg [31:0] wdata,
  output [4:0] waddr,
  output [4:0] raddr1,
  output [4:0] raddr2,
  input [31:0] snpc,
  output  wen,
  output [31:0] m_waddr,
  output [31:0] m_wdata,
  output [31:0] m_wmask,
  output m_wen,
  output [31:0] m_raddr,
  output [31:0] m_rmask,
  output m_ren,
  input [31:0] m_rdata,
  input [31:0] csr_rout,
  input [31:0] csr_a5,
  output reg [31:0] csr_wdata,
  output reg [1:0] csr_waddr,
  output reg [1:0] csr_raddr,
  input [31:0] csrr_mepc,
  input [31:0] csrr_mtvec,
  input [31:0] csrr_mstatus,
  output reg [31:0] csr_mepc_wdata,
  output reg [31:0] csr_mcause_wdata,
  output reg [31:0] csr_mstatus_wdata,
  output csr_mepc_wen,
  output csr_mcause_wen,
  output csr_mstatus_wen,
  output csr_wen
);

  wire [1:0] csr_flag;//mret or ecall

  assign waddr=rd[11:7]; //R(rd)
  assign raddr1=rs1[19:15]; //src1
  assign raddr2=rs2[24:20]; //src2
  assign csr_flag=(opcode[6:0]==7'b1110011)?(rs2[21:20]==2'b00)?2'd1:((rs2[21:20]==2'b11)?2'd2:2'd0):2'd0;// 1---ecall  2---mret 0---ebreak

  //csr
  always @(csr_imm) begin
		case(csr_imm)
			32'h341: begin csr_raddr=2'd0; csr_waddr=2'd0; end//mepc
			32'h342: begin csr_raddr=2'd1; csr_waddr=2'd1; end//mcause
			32'h300: begin csr_raddr=2'd2; csr_waddr=2'd2; end//mstatus
			32'h305: begin csr_raddr=2'd3; csr_waddr=2'd3; end//mtvec
			default: begin csr_raddr=2'd0; csr_waddr=2'd0; end
		endcase
	
  end


ysyx_23060111_ALU ALU_init (opcode,funct3,funct7,imm,rout1,rout2,csr_a5,csrr_mepc,csrr_mstatus,csrr_mtvec,csr_rout,pc,snpc,dnpc,wen,csr_wen,csr_mepc_wen,csr_mcause_wen,csr_mstatus_wen,csr_mepc_wdata,csr_mcause_wdata,csr_mstatus_wdata,wdata,csr_wdata,m_waddr,m_wdata,m_wmask,m_wen,m_raddr,m_rmask,m_ren,csr_flag,m_rdata);


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
		 wen=1'b1;
	     dnpc=snpc;	
	     end
	//lui    U
	7'b0110111:begin
	     wdata=imm;
		 wen=1'b1;
	     dnpc=snpc;
	     end
	//jal    J
	7'b1101111:begin
	     wdata=snpc;
		 wen=1'b1;
	     dnpc=pc+imm;
             end
	//addi   I
	7'b0010011:begin
	     wdata=rout1+imm;
		 wen=1'b1;
	     dnpc=snpc;
	     end
	//jalr   JR
	7'b1100111:begin
	     wdata=snpc;
		 wen=1'b1;
	     dnpc=imm+rout1;
	     end
	default:begin 
	     wdata=32'h00000000;
		 wen=1'b1;
	     dnpc=snpc;
	     end 
	endcase
	end
	*/











endmodule
  
