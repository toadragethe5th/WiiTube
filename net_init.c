#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <wiiuse/wpad.h>
#include <network.h>
#include <ogc.h>

void init() {

    net_init();

    if (net_init() < 0) {

        printf("E101: Unable to connect to network.\n");
        
    }
    
}

//
// YOUTUBE MEDIA DOWNLOADER IS TO BE CODED!
//
//:(
