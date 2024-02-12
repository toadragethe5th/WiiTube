
#include <stdio.h>
#include <unistd.h> 
#include <stdint.h>
#include <string.h>

#include 'credits.h'

void setbg()
{
   GRRLIB_SetBackgroundColour (u8 r, u8 g, u8 b, u8 a)›  //whatever black is   
}

void loadfont()
{
 GRRLIB_LoadTTFFromFile	(Minecraft.ttf	)	
}

void credits() {

     GRRLIB_PrintfTTF (150,50,Minecraft.ttf,"Copyright 2024: WiiTube", 2,(0,0,0,0));   //printf(" Copyright 2024: WiiTube\n\n");
    //wait
     GRRLIB_PrintfTTF (100,150,Minecraft.ttf, "Coded by toadragethe5th and guinea7pig",2,(0,0,0,0)); //printf("Coded by toadragethe5th and guinea7pig\n");
    //wait
   GRRLIB_PrintfTTF (100, 150,Minecraft.ttf,"Graphic design by guinea7pig", 2,(0,0,0,0));   // printf("Graphic design by guinea7pig\n");//printf("sound design: by n/a \n");  
    //wait 
    GRRLIB_PrintfTTF (100, 150,Minecraft.ttf,"special thanks to the app wiimc",2,(0,0,0,0)); //printf("special thanks to the app wiimc \n");
        //wait                                                                                                                                                                //printf("special thanks to the app wiimc \n");
     GRRLIB_PrintfTTF (100, 150, Minecraft.ttf, "and their creators for the insporation for project",2,(0,0,0,0)); // printf("and their creators for the insporation for project. \n\n");   
    //wait  
     GRRLIB_PrintfTTF (100, 150,Minecraft.ttf,"special special thanks to the wii homebrewing community",2,(0,0,0,0));//printf("special special thanks to the wii homebrewing community.\n\n");   
    //wait
            GRRLIB_PrintfTTF (100, 150,Minecraft.ttf,"check out our project at https:z//github.com/toadragethe5th/WiiTube",2,(0,0,0,0));   //printf("check out our project at https:z//github.com/toadragethe5th/WiiTube");   
    /* return to menu
    add some credit to yt */
    
}
