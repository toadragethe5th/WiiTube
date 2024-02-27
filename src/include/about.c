#include <stdio.h>
#include <unistd.h> 
#include <stdint.h>
#include <string.h>
//paremeters
//GRRLIB_PrintfTTF (x,y,fontfile,text,text size ,color
void setbg()
{
GRRLIB_SetBackgroundColour  (u8 r, u8 g, u8 b, u8 a)›  //whatever black is   
}
 void printtext()
 {
  GRRLIB_PrintfTTF(50,15,Minecraft.ttf,"wiitube is a unfoicail clieint for youtube on the wii",2,(0,0,0,0))
  GRRLIB_PrintfTTF(50,35,Minecraft.ttf,"inspired by the online fetures of wiimc",2,(0,0,0,0))
  GRRLub_PrintfTTF(50,45,Minecraft.ttf,"hope you enjoy the project- Guinea7pig&toadragethe5th",2,(0,0,0,0))
 }
