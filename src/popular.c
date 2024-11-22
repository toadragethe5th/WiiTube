#include <grrlib.h>
#include <stdio.h>


void main()
{

    displayicons();
    
}

void displayicons()
{

    GRRLIB_LoadTextureFromFile(trending_unselected.png);	//grabs the selected version of the trending page
    //code for displaying the selected version of the trending pagen goes here 
    GRRLIB_LoadTextureFromFile(mostpopselected.png);
    //code for disp;aying
    GRRLIB_LoadTextureFromFile(search_icon.png);
    //code for display icons

}

void displaywiitubelogo()
{

    GRRLIB_LoadTextureFromFile(wii_tube_logo.png);
    //code for displaying

}

void displayiconborders()
{
    
    //box for trending
    int GRRLIB_Rectangle(0,50,100,200, (0,0,0,0),false);
    //box for most veiwed
    int GRRLIB_Rectangle(0, 200, 100,200, (0,0,0,0),false);
    //box for srearch
    int GRRLIB_Rectangle( 0,400,100,200,(0,0,0,0),false);

}

void guiborder()
{

    int GRRLIB_Line	(50,50,480,50,(0,0,0,0));
    int GRRLIB_Line	(50,50,50,720,(0,0,0,0));

}
