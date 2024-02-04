#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <unistd.h>


/*

    Wii homebrew headers.

*/

#include <wiiuse/wpad.h>
#include <network.h>
#include <ogc.h>
#include <grrlib.h>


/*

    Our header files.

    - src
        -include
            -headers
                - init.h

*/

#include 'init.h'

ir_t ir;


// GRRLIB colors if we need them

#define GRRLIB_BLACK   0x000000FF 
#define GRRLIB_MAROON  0x800000FF
#define GRRLIB_GREEN   0x008000FF
#define GRRLIB_OLIVE   0x808000FF
#define GRRLIB_NAVY    0x000080FF
#define GRRLIB_PURPLE  0x800080FF
#define GRRLIB_TEAL    0x008080FF
#define GRRLIB_GRAY    0x808080FF
#define GRRLIB_SILVER  0xC0C0C0FF
#define GRRLIB_RED     0xFF0000FF
#define GRRLIB_LIME    0x00FF00FF
#define GRRLIB_YELLOW  0xFFFF00FF
#define GRRLIB_BLUE    0x0000FFFF
#define GRRLIB_FUCHSIA 0xFF00FFFF
#define GRRLIB_AQUA    0x00FFFFFF
#define GRRLIB_WHITE   0xFFFFFFFF


//
// I have a love hate relationship with this formatting.
//
/*

    I can't decide what bracket style to use.

*/

int main() {

    init();
    init_Connect();

    while 1 {

        WPAD_ScanPads();
        u32 buttonsDown = WPAD_ButtonsDown();
        WPAD_IR(0, &ir);

        if (buttonsDown & WPAD_BUTTON_HOME) {

            printf("Exiting...");
            exit(0);

        }

        VIDEO_ClearFrameBuffer(rmode, xfb, COLOR_BLACK);

        // cursor code HERE

    }
    
}