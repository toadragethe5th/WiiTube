#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <gccore.h>
#include <wpad/wiiuse.h>
#include <ogcsys.h>
#include <network.h>
#include <socket.h>
#include <assert.h>

static u32 *xfb;
static GXRModeObj *rmode;

void initialize() {
  VIDEO_Init();
  WPAD_Init();
  rmode = VIDEO_GetPreferredMode(NULL);
  xfb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
  console_init(xfb,20,20, rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
  VIDEO_Configure(rmode);
  VIDEO_SetNextFramebuffer(xfb);
  VIDEO_SetBlack(FALSE);
  VIDEO_Flush();
  VIDEO_WaitVSync();
  if(rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();

}

void init_network() {
  if (network_init() < 0) {
    printf("101: Failed to initialize network.");
  }
}

void connect() {
  init_network();
  if (network_connect() < 0) {
    printf("102: Failed to connect.");
  }
}

struct URL {

}

int main() {
  initialize();
  connect();
  return 0;
}


