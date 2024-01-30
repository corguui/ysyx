#ifndef __MEM_H__
#define __MEM_H__

#include <common.h>
uint32_t pmem_read(uint32_t &ad,int len);
uint32_t pc_read(uint32_t &pc);
void pmem_write(uint32_t &ad,int len ,uint32_t data);
void init_mem();
uint8_t* guest_to_host(uint32_t paddr);

#endif
