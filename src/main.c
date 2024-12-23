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
#include "bgmanage.h"
#include "about.h"
#include "searchgui.h"
#include "trending.h"
#include "pointer.h"



//
// I have a love hate relationship with this formatting.
//
/*

    I can't decide what bracket style to use.

*/

int main() {

    init();
    init_connect();

    ir_t ir;
    
    /*
    if USBKeyboard_IsConnected() {

        USBKeyboard_Initialize();
        
    }
    */

    GRRLIB_texImg *full_volume    = GRRLIB_LoadTextureFromFile("assets/full_volume.png");
    GRRLIB_texImg *low_volume     = GRRLIB_LoadTextureFromFile("assets/low_volume.png");
    GRRLIB_texImg *medium_volume  = GRRLIB_LoadTextureFromFile("assets/medium_volume.png");
    GRRLIB_texImg *no_volume      = GRRLIB_LoadTextureFromFile("assets/no_volume.png");

    while(1){

        WPAD_ScanPads();
        u32 buttonsDown = WPAD_ButtonsDown(0);
        WPAD_IR(0, &ir);

        // Confirmation
        if (buttonsDown & WPAD_BUTTON_HOME) {

            printf("Are you sure you want to exit?\nPress home again to confirm, and B to cancel.\n");
            if (buttonsDown & WPAD_BUTTON_HOME) {

                printf("Exiting...See you later!");
                exit(0); // Exit code of zero, might make a list later.

            } 
        }

        if (buttonsDown & WPAD_BUTTON_PLUS) {

            // SERIOUSLY, HOW DO YOU DRAW IMAGES WITH GRRLIB?

        }

        VIDEO_ClearFrameBuffer(rmode, xfb, COLOR_BLACK);

        // cursor code HERE

    }
    
}