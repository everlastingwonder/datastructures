#include <linkedstack.h>

int top(Node *head) {
  if(!empty(head)) {
    return head->next->data;
  } else {
    return HUGE_VAL;
  }
}
