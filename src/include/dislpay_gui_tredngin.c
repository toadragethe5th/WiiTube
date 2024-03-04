#include <grrlib.h>
#include <stdio.h>


void main()
{
displayicons()
}

void displayicons()
{
GRRLIB_LoadTextureFromFile(trending_selected.png)	//grabs the selected version of the trending page
//code for displaying the selected version of the trending pagen goes here 
GRRLIB_LoadTextureFromFile(mostpopunselected.png)
//code for disp;aying
GRRLIB_LoadTextureFromFile(search_icon.png)
//code for display icons

}

void displaywiitubelogo()
{
GRRLIB_LoadTextureFromFile(wii_tube_logo.png)
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
