#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__

#include <common.h>
#include <isa.h>

typedef struct Decode { 
  uint32_t pc;
  uint32_t snpc; // static next pc
  uint32_t dnpc; // dynamic next pc
  uint32_t inst;    
  IFDEF(CONFIG_ITRACE, char logbuf[128]);
  IFDEF(CONFIG_FTRACE, char funbuf[128]);
} Decode;

#endif
