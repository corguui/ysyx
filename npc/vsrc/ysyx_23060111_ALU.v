module ysyx_23060111_ALU(
    input [6:0] opcode,
    input [14:12] funct3,
    input [31:25] funct7,
    input [31:0] imm,
    input [31:0] rout1,
    input [31:0] rout2,
    input [31:0] csr_a5,
    input [31:0] csrr_mepc,
    input [31:0] csrr_mstatus,
    input [31:0] csrr_mtvec,
    input [31:0] csr_rout,
    input [31:0] pc,
    input [31:0] snpc,
    output reg[31:0] dnpc,
    output reg wen,
    output reg csr_wen,
    output reg csr_mepc_wen,
    output reg csr_mcause_wen,
    output reg csr_mstatus_wen,
    output reg[31:0]csr_mepc_wdata,
    output reg[31:0] csr_mcause_wdata,
    output reg[31:0] csr_mstatus_wdata,
    output reg[31:0] wdata,
    output reg[31:0] csr_wdata,
    output reg [31:0] m_waddr,
    output [31:0] m_wdata,
    output reg [31:0] m_wmask,
    output reg m_wen,
    output reg [31:0] m_raddr,
    output reg [31:0] m_rmask,
    output reg m_ren,
    input [1:0] csr_flag,
    input [31:0] m_rdata

);


wire cond_beq;
wire cond_bge;
wire cond_bgeu;
wire [31:0] src1;
wire [31:0] src2;
wire [31:0] csr;
wire [31:0] shifted_mstatus;
wire [31:0] mstatus;
assign shifted_mstatus=((csrr_mstatus&32'h00000080)>>4)|32'h00000080;
assign mstatus=csrr_mstatus|shifted_mstatus;

assign cond_beq = (rout1==rout2);
assign cond_bge = ($signed(rout1) >= $signed(rout2));
assign cond_bgeu = rout1 >= rout2;

assign src1 = rout1;
assign src2 = rout2;
assign csr  = csr_rout;


always @(*) 
begin
    case(opcode)
    //R
    7'b0110011:begin
        dnpc=snpc;
        m_ren=1'b0;
        m_wen=1'b0;
        csr_wen=1'b0;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
        case(funct3)
            //ADD or SUB
            3'b000:begin
             wdata = (funct7[30] == 1'b0)? (src1+src2) : (src1-src2);
             wen=1'b1;
            end
            //XOR
            3'b100:begin
             wdata = src1 ^ src2;
             wen=1'b1;
            end
            //OR
            3'b110:begin
             wdata = src1 | src2;
             wen=1'b1;
            end
            //AND
            3'b111:begin
             wdata = src1 & src2;
             wen=1'b1;
            end
            //SLL
            3'b001:begin
             wdata = src1 << src2[4:0];
             wen=1'b1;
            end
            //SRL
            3'b101:begin
             if(funct7[30] == 1'b0)
             begin
                wdata = src1 >> src2[4:0];
                wen=1'b1;
             end
             else
             //SRA
             begin
                wdata = $signed(src1) >>> src2[4:0]; //maybe error 
                wen=1'b1;
             end
            end
            //SLT
            3'b010:begin
                wdata = ($signed(src1) < $signed(src2))? 32'b1 : 32'b0;
                wen=1'b1;
            end
            //SLTU
            3'b011:begin
                wdata = (src1 < src2)? 32'b1 : 32'b0;
                wen=1'b1;
            end
        endcase
    end

    //I
    7'b0010011:begin
        dnpc=snpc;
        m_ren=1'b0;
        m_wen=1'b0;
        csr_wen=1'b0;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
        case(funct3)
            //ADDI 
            3'b000:begin
             wdata = src1+imm;
             wen=1'b1;
            end
            //XORI
            3'b100:begin
             wdata = src1 ^ imm;
             wen=1'b1;
            end
            //ORI
            3'b110:begin
             wdata = src1 | imm;
             wen=1'b1;
            end
            //ANDI
            3'b111:begin
             wdata = src1 & imm;
             wen=1'b1;
            end
            //SLLI
            3'b001:begin
             wdata = src1 << imm[4:0];
             wen=1'b1;
            end
            //SRLI
            3'b101:begin
             if(funct7[30] == 1'b0)
             begin
                wdata = src1 >> imm[4:0];
                wen=1'b1;
             end
             else
             //SRAI
             begin
                wdata = $signed(src1) >>> imm[4:0]; //maybe error 
                wen=1'b1;
             end
            end
            //SLTI
            3'b010:begin
                wdata = ($signed(src1) < $signed(imm))? 32'b1 : 32'b0;
                wen=1'b1;
            end
            //SLTIU
            3'b011:begin
                wdata = (src1 < imm)? 32'b1 : 32'b0;
                wen=1'b1;
            end
        endcase
    end

    //IL
    7'b0000011:begin
        dnpc=snpc;
        m_wen=1'b0;
        csr_wen=1'b0;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
        case(funct3)
        //LB
        3'b000:begin
           m_ren=1'b1;
           m_raddr = src1 + imm;
           m_rmask =32'd1;
           wdata = $signed({{24{m_rdata[7]}},m_rdata[7:0]});
           wen=1'b1;
        end
        //LH
        3'b001:begin
           m_ren=1'b1;
           m_raddr = src1 + imm;
           m_rmask =32'd2;
           wdata = $signed({{16{m_rdata[15]}},m_rdata[15:0]});
           wen=1'b1;
        end
        //LW
        3'b010:begin
           m_ren=1'b1;
           m_raddr = src1 + imm;
           m_rmask =32'd4;
           wen=1'b1;
           wdata = $signed(m_rdata);            
        end
        //LBU
        3'b100:begin
           m_ren=1'b1;
           m_raddr = src1 + imm;
           m_rmask =32'd1;
           wdata = {24'b0,m_rdata[7:0]};
           wen=1'b1;
        end
        //LHU
        3'b101:begin
           m_ren=1'b1; 
           m_raddr = src1 + imm;
           m_rmask = 32'd2;
           wdata = {16'b0,m_rdata[15:0]};
           wen=1'b1;
        end
        default:begin
            m_ren=1'b0;
            m_raddr=32'b0;
            wdata=32'b0;
            wen=1'b0;
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
        end
        endcase
    end


    //S
    7'b0100011:begin
        dnpc=snpc;
        wen=1'b0;
        m_ren=1'b0;
        csr_wen=1'b0;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
        case(funct3)
        //SB
        3'b000:begin
            m_wen=1'b1;
            m_waddr = src1 + imm; 
            m_wmask = 32'd1;
            m_wdata = src2;
        end
        //SH
        3'b001:begin
            m_wen=1'b1;
            m_waddr = src1 + imm; 
            m_wmask = 32'd2;
            m_wdata = src2;
        end
        //SW
        3'b010:begin
            m_wen=1'b1;
            m_waddr = src1 + imm; 
            m_wmask = 32'd4;
            m_wdata = src2;
        end

        default:begin
            m_wen=1'b0;
            wdata=32'b0;
            wen=1'b0;
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
        end
        endcase
    end

    //B
    7'b1100011:begin
        m_ren=1'b0;
        m_wen=1'b0;
        wen=1'b0;
        csr_wen=1'b0;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
        case(funct3)
        //beq
        3'b000:begin
            dnpc = (cond_beq == 1'b1)? (pc+imm) : snpc; 
        end
        //bne
        3'b001:begin
            dnpc = (cond_beq == 1'b0)? (pc+imm) : snpc; 
        end
        //blt
        3'b100:begin
            dnpc = (cond_bge == 1'b0)? (pc+imm) : snpc; 
        end
        //bge
        3'b101:begin
            dnpc = (cond_bge == 1'b1)? (pc+imm) : snpc; 
        end
        //bltu
        3'b110:begin
            dnpc = (cond_bgeu == 1'b0)? (pc+imm) : snpc; 
        end
        //bgeu
        3'b111:begin
            dnpc = (cond_bgeu == 1'b1)? (pc+imm) : snpc; 
        end
        default:begin
            wdata=32'b0;
            wen=1'b0;
            dnpc=snpc;
        end
        endcase
    end

    //csr
    7'b1110011:begin
        m_ren=1'b0;
        m_wen=1'b0;
        case(funct3)
            //csrrw
            3'b001:begin
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
            dnpc=snpc;
            wdata=csr;
            wen=1'b1;
            csr_wdata=src1;
            csr_wen=1'b1;

            end
            //csrrs
            3'b010:begin
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
            dnpc=snpc;
            wdata=csr;
            wen=1'b1;
            csr_wdata=src1|csr;
            csr_wen=1'b1;

            end
            3'b000:begin
                //ecall
                if(csr_flag==2'd1)
                begin
                csr_wen=1'b0;
                csr_mcause_wen=1'b1;
                csr_mepc_wen=1'b1;
                csr_mcause_wdata=(csr_a5==32'hffffffff)?32'h0:csr_a5;
                csr_mepc_wdata=pc;
                csr_mstatus_wen=1'b0;
                dnpc=csrr_mtvec;

                end
                //mret
                else if(csr_flag==2'd0)
                begin
                csr_mstatus_wdata =mstatus;//32'h00001880;
                csr_mstatus_wen=1'b1;
                csr_mepc_wen=1'b0;
                csr_mcause_wen=1'b0;
                csr_wen=1'b0;
                dnpc=csrr_mepc;
                end
                else
                begin
                csr_wen=1'b0;
                wen=1'b0;
                dnpc=snpc;
                csr_mepc_wen=1'b0;
                csr_mcause_wen=1'b0;
                csr_mstatus_wen=1'b0;
                end
            end
            default:begin
                csr_wen=1'b0;
                wen=1'b0;
                dnpc=snpc;
                csr_mepc_wen=1'b0;
                csr_mcause_wen=1'b0;
                csr_mstatus_wen=1'b0;
            end
        endcase

    end
    
    //J jal
    7'b1101111:begin
            m_wen=1'b0;
            m_ren=1'b0; 
            csr_wen=1'b0;
	        wdata=snpc;
            wen=1'b1;
	        dnpc=pc+imm;
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
    end
    
    //JR jalr
	7'b1100111:begin
            m_wen=1'b0;
            m_ren=1'b0;
            csr_wen=1'b0;
	        wdata=snpc;
            wen=1'b1;
	        dnpc=imm+src1;
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
	end    

    //U lui
    7'b0110111:begin
            m_wen=1'b0;
            csr_wen=1'b0;
            m_ren=1'b0;
	        wdata=imm;
            wen=1'b1;
	        dnpc=snpc;
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
	end

    //UPC auipc
	7'b0010111:begin
            m_wen=1'b0;
            m_ren=1'b0;
            csr_wen=1'b0;
 	        wdata=pc+imm;
            wen=1'b1;
	        dnpc=snpc;	
            csr_mepc_wen=1'b0;
            csr_mcause_wen=1'b0;
            csr_mstatus_wen=1'b0;
	end

    default:begin
        m_ren=1'b0;
        m_wen=1'b0;
        csr_wen=1'b0;
        wdata=32'b0;
        wen=1'b0;
        dnpc=snpc;
        csr_mepc_wen=1'b0;
        csr_mcause_wen=1'b0;
        csr_mstatus_wen=1'b0;
    end
    endcase
end

endmodule