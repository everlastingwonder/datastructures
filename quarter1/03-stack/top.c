/****
* Gus Wiedey
* Assignment 03
* Data Structures
* 11/27/2017
* top.c
****/

#include <mystack.h>

int top(Stack *s) {
  if(!empty(s)) {
    int i = (s->top - 1);
    int val = s->data[i];
    return val;
  } else {
    printf("ERROR: Cannot fetch top value because stack is empty!\n");
    return INT_MAX;
  }
}
