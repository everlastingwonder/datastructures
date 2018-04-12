/****
* Gus Wiedey
* Assignment 03
* Data Structures
* 11/27/2017
* pop.c
****/

#include <mystack.h>

int pop(Stack *s) {
  if(!empty(s)) {
    s->top--;
    int val = s->data[s->top];
    return val;
  } else {
    printf("ERROR: Cannot pop from stack because stack is empty!\n");
    return INT_MAX;
  }
}
