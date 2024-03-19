#include <grrlib.h>
#include <stdio.h>
#include <wiiuse/wpad.h>
#include <wiiuse/ir.x>
int buttonselected = 1
int selected_button_box=0


void main()
{
    displayicons();
}

void displayicons()
{
    //grabs the selected version of the trending page
    GRRLIB_DrawImg (150, 450,trending_selected.png,0,1,1,(0,0,0,0));
    GRRLIB_DrawImg (150, 650,mostpopunselected.png,0,1,1,(0,0,0,0));
    GRRLIB_DrawImg (150, 250,search_icon.png,0,1,1,(0,0,0,0));
    //code for display icons

}

void LoadTextures()
{
    GRRLIB_LoadTextureFromFile(trending_selected.png);    
    GRRLIB_LoadTextureFromFile(mostpopunselected.png);
    GRRLIB_LoadTextureFromFile(search_icon.png);
    GRRLIB_LoadTextureFromFile(wii_tube_logo.png);
}

void displaywiitubelogo()
{
    GRRLIB_DrawImg (150,0,wii_tube_logo.png,0,1,1,(0,0,0,0));
    //code for displaying

}

void displayiconborders()
{
    //box for trending      
    //paremeters:x,y, width hieght,color,filled
    GRRLIB_Rectangle(0,50,100,200,(0,0,0,0),false);
    //box or most veiwed
    GRRLIB_Rectangle(0,200,100,200, (0,0,0,0),false);
    //box for srearch
    GRRLIB_Rectangle(0,400,100,200,(0,0,0,0),false);
}

//buttton select one is the yt logo witch goea to home 
//button select 2 should be search 
//button select 3 should be trendig 
// button select 4 should be trending 
//some stuff with vidoes
void guiborder()
{  //start x,sTART Y, end x end y,color
    GRRLIB_Line	(50,50,480,50,(0,0,0,0))
    GRRLIB_Line	(50,50,50,720,(0,0,0,0) )
}

void butttonmanager() {

  while(1) {

    WPAD_Scanpads();
    u16 buttundown = WPADButtonDown(0);  
    
    if(ButtonDown & WPAD_BUTTON_RIGHT) {

        buttonselected = buttonselected + 1
        selected_button_box = button_selected_box + 1

    }
    if(ButtonDown & WPAD_BUTTON_LEFT) {

        buttonselected = buttonselected - 1 
        selected_button_box = button_selected_box - 1
    }

    if (ButtonDown & WPAD_BUTTON_A && buttonselected=1) {

        button_selected_box = 0       //this hides the select box whene clicked   

    }

    if (ButtonDown & WPAD_BUTTON_A && buttonselected = 2) {

        button_selected_box=0

    }

    if(ButtonDown & WPAD_BUTTON_A && buttonselected = 3) {
button_selected_box=0
//goes to trending 
}

  
  if(ButtonDown & WPAD_BUTTON_A & buttonselected=4)  
  {
 button_selected_box=0   
//goes to most pop
  }
 }
}
void selected_box()
{
//GRRLIB_Rectangle(//thex and why of the selecte object,the y cordinet of the selected objrct, width of the selected object,height of the selected,filled is false)
}
