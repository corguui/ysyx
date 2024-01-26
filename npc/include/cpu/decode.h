#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <common.h>

typedef concat(riscv32, _ISADecodeInfo) ISADecodeInfo;


typedef struct Decode { 
  uint32_t pc;
  uint32_t snpc; // static next pc
  uint32_t dnpc; // dynamic next pc
  ISADecodeInfo isa;    
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
} Decode;

typedef struct{
  union{
    uint32_t val;
  }inst;
} riscv32_ISADecodeInfo;


#endif
