#include "\text\ds\lib\general.h"
#include "list.h"

Node_type *SequentialSearch(List_type, Key_type);

/* test driver for linked list version of SequentialSearch  */
void main(void)
{
    List_type list;
    Node_type *loc, *tmp;
    int i;

    list.head = NULL;
    loc = NULL;
    for (i = 0; i < 10; i++) {
        tmp = (Node_type *)malloc(sizeof(Node_type *));
        tmp->info.key = i*2;
        tmp->next = NULL;
        if (list.head == NULL) {
            list.head = tmp;
            loc = tmp;
        } else {
            loc->next = tmp;
            loc = tmp;
        }
    }

    for (i = -1; i < 20; i++)
        if ((loc = SequentialSearch(list, i)) != NULL)
            printf("found %d at %d\n", i, loc->info.key);
}
