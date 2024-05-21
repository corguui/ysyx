#ifndef __MEM_H__
#define __MEM_H__

#include <common.h>
#include<cpu/cpu.h>
#include <device/mmio.h>
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000

uint32_t host_read(void* addr,int len);
uint32_t pc_read(uint32_t &pc);
void host_write(void* addr,int len ,uint32_t data);
void init_mem();
uint8_t* NPC_guest_to_host(uint32_t paddr);
void pmem_out();
uint32_t pmem_read(uint32_t addr,int len);
void pmem_write(paddr_t addr, int len, word_t data);
//device
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}



#endif
