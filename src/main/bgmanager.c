#include <stdio.h>
#include <grrlib.h>
#include <ogc.h>
#include <stdint.h>

#include "bgmanager.h"

int lightmode = 1
//1=light
//2 eqauls dark

void setbglightmode() {
  
  	//make in if statment for chaning th bg color from white to black whene using dark mode.
  	if (lightmode==1) {
    
    	RRLIB_SetBackgroundColour();
    
  	} else {
    
    	RRLIB_SetBackgroundColour(); //whatever black is
    
  	}	
  
}



void setbgcustomcolor() {
  
  	// some collor picker
 
  	//some custom clolor code
  	RRLIB_SetBackgroundColour(custom_color);
  
}

