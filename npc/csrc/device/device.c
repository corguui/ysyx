#include <common.h>
#include <utils.h> 

void init_map();
void init_serial();

void sdl_clear_event_queue() {
}

void init_device() {
  init_map();
  IFDEF(CONFIG_HAS_SERIAL, init_serial());
}
