#include "utils.h"
#include <cstdint>
#include <cstdio>
#include <device/map.h>
#include <mem.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    log_write("address (" "0x%08d"  ") is out of bound at pc = " "0x%08d", addr, top->pc);
    assert(map != NULL);
      }
  else {
    if((addr <= map->high && addr >= map->low)==0)
    {
    log_write("address (" "0x%08d" ") is out of bound {%s} [" "0x%08d" ", " "0x%08d" "] at pc = " "0x%08d",
        addr, map->name, map->low, map->high, top->pc);
    assert(addr <= map->high && addr >= map->low);
    }
       }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = (uint8_t*)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

#ifdef CONFIG_DTRACE
void Dtrace_read(paddr_t addr,word_t ret, int len, IOMap *map)
{
    log_write("dtrace read: device %s read 0x%x at 0x%x  len is %d\n",map->name,ret,addr,len);
}

void Dtrace_write(paddr_t addr, int len, word_t data, IOMap *map)
{
    log_write("dtrace write: device %s write 0x%x at 0x%x  len is %d\n",map->name,data,addr,len);
}
#endif


word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read
  word_t ret = host_read((map->space + offset), len);
  #ifdef CONFIG_DTRACE
  Dtrace_read(addr,ret,len,map);
  #endif
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write((map->space + offset), len, data);
  invoke_callback(map->callback, offset, len, true);
  #ifdef CONFIG_DTRACE
  Dtrace_write(addr,len,data,map);
  #endif
}