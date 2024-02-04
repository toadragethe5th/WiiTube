#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <unistd.h>


#include <wiiuse/wpad.h>
#include <network.h>
#include <ogc.h>
#include <grrlib.h>


#include 'init.h'

void init() {
    
    VIDEO_Init();
    GRRLIB_Init();
    WPAD_Init();
    WPAD_SetVRes(0,640,480);
    WPAD_SetDataFormat(WPAD_CHAN_0, WPAD_FMT_BTNS_ACC_IR);
    rmode = VIDEO_GetPreferredMode(NULL);
    xfb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
    console_init(xfb,20,20, rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
    VIDEO_Configure(rmode);
    VIDEO_SetNextFramebuffer(xfb);
    VIDEO_SetBlack(FALSE);
    VIDEO_Flush();
    VIDEO_WaitVSync();
    if (rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();
    
}


void init_Connect() {
    
    net_init();

    if net_init() < 0 {

        printf("101: Error initializing network.\n");
        
    }


    // 
    // I believe that this is the correct method for connecting to the network.
    //

    int IP = net_gethostip();
    struct netconn *conn = do_newconn(NETCONN_TCP);
    u16 port = 80;
    netconn_connect(conn, IP, port);
    
}

void load() { 
    
    //code for loading here 
    
}

void fail() {
    
    printf("error: connection failed.\n");
    printf("please check your router, connection to your wii, or try riiconecting\n");
    
}

void success() {
    
    printf("Network Located!\n");
    printf("Loading App...\n");
    
}