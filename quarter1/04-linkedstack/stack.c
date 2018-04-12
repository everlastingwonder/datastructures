#include <linkedstack.h>

int main() {
  int i;
  Node *head = (Node*)malloc(sizeof(Node));
  init(head);

  push(head, 5);
  push(head, 9);
  push(head, 8);
  push(head, 12);
  push(head, 6);

  while(!empty(head)) {
    i = pop(head);
    printf("%d\n", i);
  }
}
