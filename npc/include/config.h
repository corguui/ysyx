#ifndef __CONFIG_H__
#define __CONFIG_H__

#define CONFIG_MODE 1  //0 --batch 1 --log
enum {npc_batch,npc_log};
#define CONFIG_ITRACE 1
#define CONFIG_IQUEUE 1
#define CONFIG_TARGET_NATIVE_ELF 1
#define CONFIG_ITRACE_COND "true"
#define ITRACE_COND "true"
#define __GUEST_ISA__ "riscv32" 
#define CONFIG_FTRACE 1
#define CONFIG_FTRACE_COND "true"
#define FTRACE_COND "ture"
#define CONFIG_DIFFTEST 1
#endif

