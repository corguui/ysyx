#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>
#include <cstdint>

#include <mem.h>         
#include "Vysyx_23060111_top.h"
#include"verilated.h"    
#include"verilated_vcd_c.h"
#include"Vysyx_23060111_top__Dpi.h"
#include "Vysyx_23060111_top___024root.h"
                         
typedef struct {
  uint32_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];
  uint32_t csr[4];
  uint32_t pc;
} NPC_CPU_state;

extern NPC_CPU_state cpu;
extern int main_time;    
extern VerilatedContext* contextp;
extern Vysyx_23060111_top *top;
extern VerilatedVcdC* tfp;

void cpu_exec_once(VerilatedVcdC* tfp);
void cpu_init();
void cpu_exec(uint64_t n);
void cpu_read_reg();
void cpu_write_reg();

#endif
