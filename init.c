#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <wiiuse/wpad.h>
#include <network.h>
#include <ogc.h>

void Initialise() {
    
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
    if (rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();
    
}


void init_Connect() {
    
    net_init();
    if net_init() < 0 {

        printf("101: Error initializing network.\n");
        
    }

    // 
    // I believe that this is the correct method for fetching an IP address.
    int IP = net_gethostip();
    struct netconn *conn = do_newconn(NETCONN_TCP);
    u16 port = 80;
    netconn_connect(conn, IP, port);
    
}

void load() { 
    
    //code for loadig here 
    
}

void fail() {
    
    printf("error:connecrion failed\n");
    printf("please check your router, connection to your wii, or try riiconecting\n");
    
}

void success() {
    
    printf("network located\n");//return zero
    //wait
    printf("loading app\n");
    
}

int main() {
    initialize();
    printf("welcome to wiitube by guinea7pig and toadragethe5th.*\n");

    while(1) {

        WPAD_ScanPads();
        u16 buttonsDown = WPAD_ButtonsDown(0);

        if (buttonsDown & WPAD_BUTTON_HOME) {

            exit(0);
            
        }
        
    }
    
}
