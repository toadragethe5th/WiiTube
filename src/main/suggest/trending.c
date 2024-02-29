#include <grrlib.h>
#include <stdio.h>

#include 'trending.h'

/*

    Trending page

    GUINEA7PIG! REMEMBER TO USE HEADERS!

    The 

    int main() {
        // function
    }

    is useless here!

*/

void displayicons()
{

    GRRLIB_LoadTextureFromFile(trending_selected.png);	//grabs the selected version of the trending page
    GRRLIB_LoadTextureFromFile(mostpopunselected.png);
    GRRLIB_LoadTextureFromFile(search_icon.png);
    //code for display icons

}

void displaywiitubelogo()
{

    GRRLIB_LoadTextureFromFile(wii_tube_logo.png);

}

void displayiconborders()
{

    
    GRRLIB_Rectangle(0,50,100,200,(0,0,0,0),false);
    GRRLIB_Rectangle(0,200,100,200, (0,0,0,0),false);
    GRRLIB_Rectangle(0,400,100,200,(0,0,0,0),false);

}

void guiborder()
{

    GRRLIB_Line(50,50,480,50,(0,0,0,0));
    GRRLIB_Line(50,50,50,720,(0,0,0,0));


}