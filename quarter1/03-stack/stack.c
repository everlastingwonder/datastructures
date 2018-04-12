/****
* Gus Wiedey
* Assignment 03
* Data Structures
* 11/27/2017
* stack.c
****/

#include <mystack.h>

int main() {
  int i;
  Stack *s = (Stack*)malloc(sizeof(Stack));
  s->top = 0;

  push(s, 5);
  push(s, 9);
  push(s, 8);
  push(s, 12);
  push(s, 6);

  while(!empty(s)) {
    i = pop(s);
    printf("%d\n", i);
  }
}
