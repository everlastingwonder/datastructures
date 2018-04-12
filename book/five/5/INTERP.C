 
#include "array.h"

/* InterpSearch: interpolation search   */
int InterpSearch(List_type list, Key_type target)
{
    int top, bottom, mid;

    top = list.count - 1;   /* initialize bounds to encompass entire list   */
    bottom = 0;
    while (top > bottom) {      /* check terminating condition              */
        mid = bottom + (target - list.entry[bottom].key)/(list.entry[top].key -
            list.entry[bottom].key) * (top - bottom - 1);
 
        if (mid < bottom)
            mid = bottom;
        else if (mid >= top)
            mid = top - 1;
 
        if (target > list.entry[mid].key)
            bottom = mid + 1;   /* reduce to the top half of the list       */
        else
            top = mid;          /* reduce to the bottom half of the list    */
    }
 
    if (top == -1)
        return -1;          /* search of an empty list always fails     */

    if (target == list.entry[top].key)
        return top;
    else
        return -1;
}
