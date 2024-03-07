#include <grrlib.h>
#include <stdio.h>
//paremeters
//void 	GRRLIB_DrawImg (x,y , texture, rotation, scaleX,  scaleY,  color)


void main()
{
    displayicons()
}

void displayicons()
{
    GRRLIB_DrawImg (150, 450,trending_unselected.png,0,1,1,(0,0,0,0))
    GRRLIB_DrawImg (150, 650,trending_unselected.png,0,1,1,(0,0,0,0))
    GRRLIB_DrawImg (150, 250,search_icon.png,0,1,1,(0,0,0,0))
//code for display icons

}

void displaywiitubelogo()
{
    GRRLIB_DrawImg (150,0,wii_tube_logo.pngg,0,1,1,(0,0,0,0))
/   /code for displaying
}

void LoadTextures()
{
    GRRLIB_LoadTextureFromFile(trending_unselected.png)
    GRRLIB_LoadTextureFromFile(mostpopselected.png)
    GRRLIB_LoadTextureFromFile(search_icon.png)
    GRRLIB_LoadTextureFromFile(wii_tube_logo.png)


}

void displayiconborders()
{
    //box for trending
    int GRRLIB_Rectangle(0,50,100,200, (0,0,0,0),false)//paremeters:x,y, width hieght,color,filled
    //box or most veiwed
    int GRRLIB_Rectangle(0, 200, 100,200, (0,0,0,0),false )
    //box for srearch
    int GRRLIB_Rectangle( 0,400,100,200,(0,0,0,0),false )
}

void guiborder()
{
    int GRRLIB_Line	(50,50,480,50,(0,0,0,0) )//start x,sTART Y, end x end y,color

    int GRRLIB_Line	(50,50,50,720,(0,0,0,0) )

}
