 
#include "general.h"
#include "array.h"

Key_type FindMedian(List_type, List_type);
void printlist(List_type);

/* test driver for FindMedian   */
void main(void)
{
    List_type L1, L2;
    Key_type median;
    int i;

    for (i = 0; i < 10; i++) {
        L1.entry[i].key = i;
        L2.entry[i].key = i+10;
    }
    L1.count = i-1;
    L2.count = i;

    printf("List 1: ");
    printlist(L1);

    printf("List 2: ");
    printlist(L2);

    if ((median = FindMedian(L1, L2)) != NULL)
        printf("The median is %d\n", median);
}

/* printlist: prints the contents of the list   */
void printlist(List_type L)
{
    int i;

    for (i = 0; i < L.count; i++)
        printf("%2d ", L.entry[i].key);
    printf("\n");
}
