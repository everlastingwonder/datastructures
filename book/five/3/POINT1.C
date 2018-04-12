 
#include "array.h"

/* Binary1: pointer version of binary search    */
int Binary1(List_type list, Key_type target)
{
    Item_type *top, *bottom, *mid;
    int interval;

    /* initialize bounds to encompass the whole list    */
    top = list.entry + list.count - 1;
    bottom = list.entry;
    interval = list.count;
 
    while (top > bottom) {      /* check terminating condition              */
        mid = bottom + (interval = (interval-1) / 2);
        if (target > mid->key)
            bottom = mid + 1;   /* reduce to the top half of the list       */
        else
            top = mid;          /* reduce to the bottom half of the list    */
    }
 
    if (top == list.entry-1)
        return -1;              /* search of an empty list always fails     */
 
    if (target == top->key)
        return top - list.entry;
    else
        return -1;
}
