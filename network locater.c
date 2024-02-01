#include <stdio.h>
#include <unistd.h> 


int networkfound = 1;

void color(){
 printf("\033[0;32m");
}

void checknetwork(){
  //code for locating network connecion goes here
}

void load(){
//code for loadig here 
}

void fail(){
printf("error:connecrion failed\n");
printf("please check your router, connection to your wii, or try riiconecting\n");
}
void succsess(){
printf("network located\n");//return zero
//wait
printf("loading app\n");
}

int main() {
color();  
printf("welcome to wiitube by guinea7pig and toadragethe5th.*\n");

//* some discalamer about how this just a portal to yt and all that boring siclamer stuff
printf("locating network...\n");
checknetwork();
//wait unitl network found if not after a muinite,go to connection failed and start again
if(networkfound==1) {
succsess();
} else{
fail();
return 0;
}
}



