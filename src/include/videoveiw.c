#include <stdio.h>
#include <unistd.h> 
#include <stdint.h>
#include <string.h>

#include <grrlib.h>

bool puaused = false
int progress_filled = 0
int voulume = 0
bool playbuttonhidden = true
bool puusebuttonhidden = false
bool muted = false

//int playbuttonhidden=0 1=show 0=hidden changes the scale 
//int puasebuttonhiddern=0 1=show 0=hidden changes the scale 
////void 	GRRLIB_DrawImg (x,y , texture, rotation, scaleX,  scaleY,  color)    
void viewport() 
{
    //code for video and veiwport and stuff    
}

void progressbar()
{
    //paremeters:x,y, width hieght,color,filled

    //code for it filling up in time the to the video

    //the filling up.
    GRRLIB_Rectangle(50,100,progress_filled,100,(0,0,0,0),true)

    /*
    
    Something for the progress bar or something:

    
    
    */

    //the outside
    GRRLIB_Rectangle(50,100,1000,100,(0,0,0,0,),false)

}

void volume_manger() {

    if (voulume == 0) {

        muted = true

    }

    if (volume < 1) {

        muted=false

    }

}

void voulume_Display() {

    if(voulume>85) {

        GRRLIB_DRAWIMG(50,500,full_volume.png,0,1,1(0,0,0,0))

    }

    if(voulume > 50) {

        GRRLIB_DRAWIMG(50,500,meduim_volume.png,0,1,1(0,0,0,0)) 

    }


if (muted == false) {

    GRRLIB_DrawImg(50,500,low_volume.png,0,1,1,(0,0,0,0))

}



if(muted==true) {

    GRRLIB_DrawImg(50,500,no_volume.png,0,1,1,(0,0,0,0))
    
}


void buttonmanger()
{
    //puase
    if ()//code for button being pressed)   
    {
    puased=true
    }
    if (puased==true)
    {
    //code for puasing video        
    }
    if(puased==false )
    {
    //code for resumong video   
    }
    //want to make the play and puse button change depending on if its puased or not.

    if(puased = false ) {
        puased = false 
    }
}

void buttondisplay()
{
    //void 	GRRLIB_DrawImg (x,y , texture, rotation, scaleX,  scaleY,  color)    
    GRRLIB_DrawImg(50,500,play_button.png,0,playbuttonhidden,1,(0,0,0,0))
    GRRLIB_DrawImg(50,500,pausebutton.png,0,puusebuttonhiden0,1,(0,0,0,0))
}



void LoadTextures()
{
    GRRLIB_LoadTextureFromFile(pausebutton.png) 
    GRRLIB_LoadTextureFromFile(full_volume.png)
    GRRLIB_LoadTextureFromFile(low_volume.png)
    GRRLIB_LoadTextureFromFile(meduim_volume.png) 
    GRRLIB_LoadTextureFromFile(play_button.png)  
    GRRLIB_LoadTextureFromFile(no_volume.png)
}

void buttonmanger()
{
    //code for manging buttin iput stuff    
}