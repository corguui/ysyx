#ifndef __SDB_H__
#define __SDB_H__
#include <common.h>
#include <cstdint>

uint32_t expr(char *e, bool *success);
void sdb_mainloop();
void init_regex();
void init_wp_pool();
//watchpoint
#define NR_WP 32
typedef struct watchpoint {
  int NO;
  int flat;
  struct watchpoint *next;
  char args[500];
  uint32_t val;
} WP;

WP* new_wp();
//extern WP wp_pool[NR_WP];
void free_wp(int no);
bool check_wp();
void watchpoint_display();
void create_wp(char* args);
#endif
