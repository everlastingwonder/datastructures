#ifndef _LINKED_STACK_H_
#define _LINKED_STACK_H_

#include <common.h>

struct STACKNODE {
  int data;
  struct STACKNODE *next;
};
typedef struct STACKNODE Node;

void push(Node*, int);
int pop(Node*);
int top(Node*);
bool empty(Node*);

#endif /* _LINKED_STACK_H_ */
