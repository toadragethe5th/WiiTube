#include <grrlib.h>
#include <stdio.h>


void main()
{
displayicons()
}

void displayicons()
{
GRRLIB_LoadTextureFromFile(trending_unselected.png)	//grabs the selected version of the trending page
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
    //box for trending
 int GRRLIB_Rectangle	(const f32 0,
 const f32 50,
 const f32 100,
 const f32	200,
 const u32 (0,0,0,0)
 const bool	false )
//box or most veiwed
 int GRRLIB_Rectangle	(const f32 0,
 const f32 200,
 const f32 100,
 const f32	200,
 const u32 (0,0,0,0)
 const bool	false )


//box for srearch
 int GRRLIB_Rectangle	(const f32 0,
 const f32 400,
 const f32 100,
 const f32	200,
 const u32 (0,0,0,0)
 const bool	false )
}

void guiborder()
{
int GRRLIB_Line	(	
const f32	50,
const f32	50,
const f32	480,
const f32	50,
const u32	(0,0,0,0) )

int GRRLIB_Line	(	
const f32	50,
const f32	50,
const f32	50,
const f32	720,
const u32	(0,0,0,0) )

}
