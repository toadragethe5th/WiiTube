#include <stdio.h>
#include <stdint.h>

#include <grrlib.h>
//#include <ogc.h> // does not exist in libogc

#include "bgmanage.h"


int lightmode = 1;            // 1 = light, 0 = dark


void setbglightmode() {
  
  	//make in if statment for chaning th bg color from white to black whene using dark mode.
  	if (lightmode==1) {
    
    	GRRLIB_SetBackgroundColour(0,0,0,0); // whatever white is
    
  	} else {
    
    	GRRLIB_SetBackgroundColour(0,0,0,0); //whatever black is
    
  	}	
  
}



void setbgcustomcolor() {
  
  	// some collor picker
 
  	//some custom clolor code
  //	GRRLIB_SetBackgroundColour(custom_color); // custom collor picker implmented
  
}