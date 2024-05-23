#include <common.h>
#include <utils.h> 
#include <device/alarm.h>

#ifdef CONFIG_DEVICE
void init_timer();
void init_map();
void init_serial();
#endif

void sdl_clear_event_queue() {
}

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;
}

void init_device() {
  #ifdef CONFIG_DEVICE
  init_map();
  #ifdef CONFIG_HAS_SERIAL
  init_serial();
  #endif
  #ifdef CONFIG_HAS_TIMER
  init_timer();
  #endif


  #endif
}
