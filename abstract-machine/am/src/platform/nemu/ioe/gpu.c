#include <am.h>
#include <nemu.h>
#include <sys/types.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
# define W    inl(VGACTL_ADDR)>>16 
# define H    (inl(VGACTL_ADDR)<<16)>>16

void __am_gpu_init() {
  /*
  int i;
  uint32_t w = W;  // TODO: get the correct width
  uint32_t h = H;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
  */
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x=ctl->x;
  int y=ctl->y;
  int i=0;
  int k=0;
  int w=ctl->w;
  int h=ctl->h;
  uint32_t WL=W;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels=ctl->pixels;
  for(k=y;k<h+y;k++)
  {
    for(i=x;i<w+x;i++)
    {
      fb[WL*k+i]=pixels[w*(k-y)+(i-x)]; 
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
