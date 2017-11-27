#include <mystack.h>

void push(Stack *s, int val) {
  if(!full(s)) {
    s->data[s->top] = val;
    s->top++;
  } else {
    printf("ERROR: Cannot push to stack because stack is full!");
  }
}
