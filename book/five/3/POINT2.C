 
#include "array.h"

/* Binary2: pointer version of binary search    */
int Binary2(List_type list, Key_type target)
{
    Item_type *top, *bottom;
    Item_type *middle;  /* middle points to the target if found */
    int interval;

    top = list.entry + list.count - 1;  /* initialize variables */
    bottom = list.entry;
    middle = 0;
    interval = list.count;
 
    while (top >= bottom) { /* check terminating conditions */
        middle = bottom + (interval = (interval-1) / 2);
        if (target == middle->key)          /* successful search            */
            return middle - list.entry;
        else if (target > middle->key)
            bottom = middle + 1;        /* reduce to top half of the list   */
        else
            top = middle - 1;       /* reduce to bottom half of the list    */
    }
    return -1;
}
