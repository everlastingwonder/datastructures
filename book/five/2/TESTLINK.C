 
#include "general.h"
#include "list.h"

Node_type *SequentialSearch(List_type, Key_type, int *);
void Fill(List_type *, int);

/* test the linked list version of sequential search */
int main(int argc, char *argv[])
{
    int i, c, n;
    long sum;
    List_type list;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s n\n", argv[0]);
        exit(1);
    }
 
    n = atoi(argv[1]);
    if (n < 1 || n > MAX) {
        fprintf(stderr, "n must be between 1 and %d\n", MAX);
        exit(1);
    }

    Fill(&list, n);

    (void) SequentialSearch(list, n+1, &c);
    printf("Unsuccessful search made %d comparisons\n", c);
 
    sum = 0;
    for (i = 0; i < n; i++) {
        (void) SequentialSearch(list, i, &c);
        sum += c;
    }
    printf("Successful search averaged %.2f comparisons\n", (float)sum/n);

    return 0;
}

 
/* Fill: create a list with n entries */
void Fill(List_type *list, int n)
{
    int i;
    Node_type *new, *current;

    list->head = (Node_type *)malloc(sizeof(Node_type *));
    list->head->info.key = 0;
    list->head->next = NULL;
    current = list->head;
    for (i = 1; i < n; i++) {
        if ((new = (Node_type *)malloc(sizeof(Node_type *))) == NULL) {
            printf("adjusting n to %d due to lack of memory\n", i-1);
            n = i-1;
            break;
 
        } else {
            new->info.key = i;
            new->next = NULL;
            current->next = new;
            current = new;
        }
    }
}

 
/* SequentialSearch: modified to count comparisons  */
Node_type *SequentialSearch(List_type list, Key_type target, int *cmp)
{
    Node_type *location = list.head;

    *cmp = 0;
    while (location != NULL) {
        *cmp += 1;
        if (location->info.key == target)
            return location;
        else
            location = location->next;
    }
    return NULL;
}
