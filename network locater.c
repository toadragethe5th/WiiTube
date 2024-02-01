#include <stdio.h>
#include <unistd.h> 


int networkfound = 1;


int main() {
printf("welcome to wiitube by guinea7pig and toadragethe5th.*\n");

//* some discalamer about how this just a portal to yt and all that boring siclamer stuff
printf("locating network...\n");
//code for locating network goes here
//wait
if(networkfound==1) {
printf("network located\n");//return zero
} else{
printf("error:connecrion failed\n");   
return 0;
}
}


