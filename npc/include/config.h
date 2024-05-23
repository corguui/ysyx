#ifndef __CONFIG_H__
#define __CONFIG_H__

#define CONFIG_MODE 1
//0 --batch 1 --log  
//#define CONFIG_CC_WATCHPOINT 1
//#define CONFIG_ITRACE 1
//#define CONFIG_IQUEUE 1
//#define CONFIG_TARGET_NATIVE_ELF 1
#define __GUEST_ISA__ "riscv32" 
//#define CONFIG_FTRACE 1
//#define CONFIG_DTRACE 1
//#define CONFIG_DIFFTEST 1
//#define CONFIG_MTRACE 1
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_DEVICE 1
#define CONFIG_HAS_SERIAL 1 //串口
#define CONFIG_HAS_TIMER 1 //时钟
#endif

