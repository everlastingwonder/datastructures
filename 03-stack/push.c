/****
* Gus Wiedey
* Assignment 03
* Data Structures
* 11/27/2017
* push.c
****/

#include <mystack.h>

void push(Stack *s, int val) {
  if(!full(s)) {
    s->data[s->top] = val;
    s->top++;
  } else {
    printf("ERROR: Cannot push to stack because stack is full!\n");
  }
}
