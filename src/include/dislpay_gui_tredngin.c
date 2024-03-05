#include <grrlib.h>
#include <stdio.h>


void main()
{
displayicons()
}

void displayicons()
{
//grabs the selected version of the trending page
GRRLIB_DrawImg (150, 450,trending_selected.png,0,1,1,(0,0,0,0))
GRRLIB_DrawImg (150, 650,mostpopunselected.png,0,1,1,(0,0,0,0))
GRRLIB_DrawImg (150, 250,search_icon.png,0,1,1,(0,0,0,0))
//code for display icons

}

void LoadTextures()
{
GRRLIB_LoadTextureFromFile(trending_selected.png)    
GRRLIB_LoadTextureFromFile(mostpopunselected.png)
GRRLIB_LoadTextureFromFile(search_icon.png)
GRRLIB_LoadTextureFromFile(wii_tube_logo.png)
}

void displaywiitubelogo()
{
GRRLIB_DrawImg (150,0,wii_tube_logo.png,0,1,1,(0,0,0,0))
//code for displaying
}

void displayiconborders()
{
    //box for trending      //paremeters:x,y, width hieght,color,filled
 int GRRLIB_Rectangle(0,50,100,200,(0,0,0,0),false )
//box or most veiwed
 int GRRLIB_Rectangle(0,200,100,200, (0,0,0,0),false )


//box for srearch
 int GRRLIB_Rectangle(0,400,100,200,(0,0,0,0),false )
}

void guiborder()
{  //start x,sTART Y, end x end y,color
int GRRLIB_Line	(50,50,480,50,(0,0,0,0))

int GRRLIB_Line	(50,50,50,720,(0,0,0,0) )

}
