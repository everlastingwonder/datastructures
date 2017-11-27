#include <mystack.h>

int top(Stack *s) {
  if(!empty(s)) {
    int i = (stack->top - 1);
    int val = stack->data[i];
    return val;
  } else {
    return HUGE_VAL;
  }
}
