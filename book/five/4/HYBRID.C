 
#include "array.h"

#define SWITCHOVER  5   /* your mileage may vary    */

/* HybridSearch: switches to sequential search for lists of size SWITCHOVER   */
int HybridSearch(List_type list, Key_type target)
{
    int top, bottom, mid;

    top = list.count - 1;   /* initialize bounds to encompass entire list   */
    bottom = 0;
    while (top > bottom + SWITCHOVER) {     /* check terminating condition  */
        mid = (top + bottom) / 2;
        if (target > list.entry[mid].key)
            bottom = mid + 1;   /* reduce to the top half of the list       */
        else
            top = mid;          /* reduce to the bottom half of the list    */
    }
 
    /* search the remaining elements sequentially   */
    while (bottom <= top)
        if (list.entry[bottom].key == target)
            return bottom;
        else
            bottom++;

    return -1;
}
