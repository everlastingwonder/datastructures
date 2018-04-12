 
#include "general.h"
#include "array.h"

int SequentialSearch(List_type, Key_type, int *);
void Fill(List_type *, int);

/* test the contiguous version of sequential search */
main(int argc, char *argv[])
{
    List_type list;
    int i, c, n;
    long sum;

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
 
/* Fill: fills the list with integers   */
void Fill(List_type *list, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        list->entry[i].key = i;
    }
    list->count = n;
}

 
/* SequentialSearch: modified to count comparisons */
int SequentialSearch(List_type list, Key_type target, int *cmp)
{
    int location = 0;

    *cmp = 0;
    while (location <= list.count-1) {
        *cmp += 1;
        if (list.entry[location].key == target)
            return location;
        else
            location++;
    }
    return -1;
}
