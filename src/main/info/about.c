#include <stdio.h>
#include <unistd.h> 
#include <stdint.h>
#include <string.h>

// Added missing include.
#include <grrlib.h>

/*

    guinea7pig, please don't add parameters.

*/

/*

set RGBA to whatever black is

void setbg()
{

    GRRLIB_SetBackgroundColour  (r, g, b, a);    

}

*/

void printtext()
{

    GRRLIB_PrintfTTF(50,15,"Minecraft.ttf","wiitube is a unfoicail clieint for youtube on the wii",2,(0,0,0,0));
    GRRLIB_PrintfTTF(50,35,"Minecraft.ttf","inspired by the online fetures of wiimc",2,(0,0,0,0));
    GRRLIB_PrintfTTF(50,45,"Minecraft.ttf","hope you enjoy the project- Guinea7pig&toadragethe5th",2,(0,0,0,0));

}