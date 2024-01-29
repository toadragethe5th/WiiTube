#include <gccore.h>
#include <wpad/wiiuse.h>
#include <ogcsys.h>
#include <network.h>
#include <stdio.h>

void init_network() {
  if (network_init() < 0) {
    // error logic here
  }
}

void connect() {
  init_network();
  if (network_connect() < 0) {
    // error logic here
  }
}

int main() {
  // main function
  return 0;
}


