 
#include "array.h"

#define EQ(a, b)    ((a) == (b))
#define LT(a, b)    ((a) < (b))

 /* Binary1: forgetful version of binary search  */
int Binary1(List_type list, Key_type target)
{
    int top, bottom, middle;

    top = list.count - 1;   /* Initialize bounds to encompass entire list.  */
    bottom = 0;
    while (top > bottom) {      /* Check terminating condition.             */
        middle = (top + bottom) / 2;
 
        if (LT(list.entry[middle].key, target))
            bottom = middle + 1;    /* Reduce to the top half of the list.  */
        else
            top = middle;           /* Reduce to the bottom half of the list. */
    }
 
    if (top == -1)
        return -1;              /* Search of an empty list always fails.    */
 
    if (EQ(list.entry[top].key, target))
        return top;
    else
        return -1;
}
