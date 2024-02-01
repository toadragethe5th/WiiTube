#include <stdio.h>
#include <unistd.h> 


int networkfound = 0;


int main() {
printf("welcome to wiitube by guinea7pig and toadragethe5th.*\n");

//* some discalamer about how this just a portal to yt and all that boring siclamer stuff
printf("locating network...\n");
//code for locating network goes here
//wait
if(networkfound==1) {
printf("network located\n");//return zero
//wait
printf("loading app\n");
} else{
printf("error:connecrion failed\n");
printf("please check your router, connection to your wii, or try riiconecting\n");
return 0;
}
}



