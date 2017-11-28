#ifndef _MY_STACK_H_
#define _MY_STACK_H_

#include <common.h>

#define STACK_MAX 50
#define empty(s) ( s->top == 0 ? true : false )
#define full(s) ( s->top == STACK_MAX ? true : false )

struct STACK {
  int top;
  int data[STACK_MAX];
};
typedef struct STACK Stack;

void push(Stack*, int);
int pop(Stack*);
int top(Stack*);

#endif /* _MY_STACK_H_ */
