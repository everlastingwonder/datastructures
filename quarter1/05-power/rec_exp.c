#include <stdio.h>
#include <common.h>

long power(long base, int exp) {
  if(exp == 1) {
    return base;
  } else {
    return (power(base, exp - 1) * base);
  }
}
