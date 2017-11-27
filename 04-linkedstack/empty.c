#include <linkedstack.h>

bool empty(Node *head) {
  if(head->next == NULL) {
    return true;
  } else {
    return false;
  }
}
