#ifndef _LINKED_STACK_H_
#define _LINKED_STACK_H_

#include <common.h>

#define empty(h) ( h->next == NULL ? true : false )

struct STACKNODE {
  int data;
  struct STACKNODE *next;
};
typedef struct STACKNODE Node;

void init(Node*);
void push(Node*, int);
int pop(Node*);
int top(Node*);

#endif /* _LINKED_STACK_H_ */
