#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>

static uint32_t *rtc_port_base = NULL;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == -1 || offset == 4);
  if (!is_write && offset == -1) {
    uint64_t us = get_time();
    rtc_port_base[-1] = (uint32_t)us;
    rtc_port_base[0] = us >> 32;
  }
}


void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 7, rtc_io_handler);
}
