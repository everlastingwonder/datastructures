#include <stdio.h>
//#include <common.h>

long power(long base, int exp) {
  int i;
  long ans = 1;

  for(i = 0; i < exp; i++) {
    ans = (ans * base);
  }

  return ans;
}
