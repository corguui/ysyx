import "DPI-C" function void ebreak(input int inst);
module ysyx_23060111_IDU(
  input [31:0] inst,
  output [6:0] opcode,
  output [11:7] rd,
  output [14:12] funct3,
  output [19:15] rs1,
  output [24:20] rs2,
  output [31:25] funct7,
  output [31:0] imm,
  output inv_flag

 );
always @(inst)
begin 
     ebreak(inst);
end
  
  assign opcode=inst[6:0];
  assign rd=inst[11:7];
  assign funct3=inst[14:12];
  assign rs1=inst[19:15];
  assign rs2=inst[24:20];
  assign funct7=inst[31:25];

//imm 
ysyx_23060111_MuxKeyWithDefault #(10, 7, 33) typeMux ({imm,inv_flag}, opcode ,{32'b0,1'b1} , {
   // the invalid_flags = 1'b1 means Can't find the type
    7'b0010111, {inst[31:12],12'b0,1'b0}, //auipc   type:UPC   
    7'b0110111, {inst[31:12],12'b0,1'b0}, //lui     type:U   
    7'b1101111, {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0,1'b0},//jal type:J   J                                   //jal     type:J  4'd3
    7'b0010011, {{20{inst[31]}},inst[31:20],1'b0}, //addi    type:I  
    7'b1100111, {{20{inst[31]}},inst[31:20],1'b0},  //jalr    type:JR
    7'b1110011, {33'b0},  //ebreak
    7'b0100011, {{20{inst[31]}},inst[31:25],inst[11:7],1'b0},  //sw type:S  
    7'b0110011, {32'b0,1'b0},//type:R
    7'b0000011, {{20{inst[31]}},inst[31:20],1'b0}, //    type:IL
    7'b1100011, {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],2'b0}//type:B
  });


endmodule

