#include <mystack.h>

int pop(Stack *s) {
  if(!empty(s)) {
    s->top--;
    int val = s->data[s->top];
    return val;
  } else {
    return HUGE_VAL;
  }
}
