#include <linkedstack.h>

int pop(Node *head) {
  if(!empty(head)) {
    Node *oldTop = head->next;
    Node *newTop = oldTop->next;
    head->next = newTop;
    return oldTop->data;
  } else {
    return HUGE_VAL;
  }
}
