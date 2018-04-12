#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, a, b;

  for(i = 1; i > 0; i++){
    //b = random(0,32767);
    b = random();
    a = b % 2;
    if(a == 0) { printf("0456%d05f6da4f567f89a4563%d04gf40a6gf8a6456da78%d", a, b, i); }
    if(a == 1) { printf("4f56d%da48f9%das456f4ds8%da946a", a, b, i); }
  }
}
