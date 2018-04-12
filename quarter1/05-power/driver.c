#include <stdio.h>
#include <common.h>

long power(long, int);

int main() {
  long ans = power(13, 8);
  printf("13^8 = %li\n", ans);
}
