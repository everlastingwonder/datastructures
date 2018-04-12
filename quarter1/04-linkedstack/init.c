#include <linkedstack.h>

void init(Node *head) {
  head->next = NULL;
  head->data = BAD_VAL;
}
