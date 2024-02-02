#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <wiiuse/wpad.h>
#include <network.h>
#include <ogc.h>


int networkfound = 0;

void color() {
    
    printf("\033[0;32m");
    
}

void connect() {
    
    net_init();
    if net_init() < 0 {

        printf("Error connecting to network.\n");
        
    }
    
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
    
    color();  
    printf("welcome to wiitube by guinea7pig and toadragethe5th.*\n");

    //* some discalamer about how this just a portal to yt and all that boring siclamer stuff
    printf("locating network...\n");
    checknetwork();
    //wait unitl network found if not after a muinite,go to connection failed and start again
    if (networkfound==1) {
        
        success();
        
    } else {
        
        fail();
        
    return 0;
        
    }
    
}
