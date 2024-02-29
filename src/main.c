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
                - trending.h
                - popular.h
                - credits.h
                - bgmanage.h

*/

#include "init.h"
#include "credits.h"
#include "bgmanager.h"


ir_t ir;


//
// I have a love hate relationship with this formatting.
//
/*

    I can't decide what bracket style to use.

*/

int main() {

    init();
    init_Connect();

    GRRLIB_texImg *full_volume    = GRRLIB_LoadPNG("assets/full_volume.png");
    GRRLIB_texImg *low_volume     = GRRLIB_LoadPNG("assets/low_volume.png");
    GRRLIB_texImg *medium_volume  = GRRLIB_LoadPNG("assets/medium_volume.png");
    GRRLIB_texImg *no_volume      = GRRLIB_LoadPNG("assets/no_volume.png");

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