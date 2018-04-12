#include <linkedstack.h>

int top(Node *head) {
  if(!empty(head)) {
    return head->next->data;
  } else {
    return BAD_VAL;
  }
}
