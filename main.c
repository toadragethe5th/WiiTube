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

#include 'init.h'

int main() {

    initialize();

    while 1 {

        WPAD_ScanPads();
        u16 buttonsDown = WPAD_ButtonsDown();

        if (buttonsDown & WPAD_BUTTON_HOME) {

            printf("Exiting...");
            exit(0);

        }

    }
    
}