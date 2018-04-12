#include <linkedstack.h>

void push(Node* head, int newData) {
  Node *oldTop = head->next;
  Node *newTop = (Node*)malloc(sizeof(Node));
  newTop->next = oldTop;
  newTop->data = newData;
  head->next = newTop;
}
