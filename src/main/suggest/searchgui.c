#include <grrlib.h>
#include <stdio.h>

#include 'searchgui.h'

void displayicons()
{

    GRRLIB_LoadTextureFromFile(trending_unselected.png);
    GRRLIB_LoadTextureFromFile(mostpopunselected.png);
    GRRLIB_LoadTextureFromFile(search_icon.png);

}



void displaywiitubelogo()
{

    GRRLIB_LoadTextureFromFile(wii_tube_logo.png)

}

void displayiconborders()
{

    //box for trending
    GRRLIB_Rectangle(0,50,100,200,(0,0,0,0),false)
    //box or most veiwed
    GRRLIB_Rectangle(0,200,100,200, (0,0,0,0), false)
    //box for srearch
    GRRLIB_Rectangle(0,400, 100,200, (0,0,0,0),false)

}

void guiborder()
{

    GRRLIB_Line	(50,50,480,50,(0,0,0,0) )
    GRRLIB_Line	(50,50,	50,720,(0,0,0,0) )

}
