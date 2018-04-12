 
#include "array.h"

/* TernarySearch: performs a ternary search to find target */
int TernarySearch(List_type list, Key_type target)
{
    int top, bottom, mid;

    top = list.count - 1;       /* initialize variables */
    bottom = 0;
 
    while (top >= bottom) { /* check terminating conditions */
        mid = bottom + (top - bottom + 1) / 3;
        if (target == list.entry[mid].key)  /* successful search            */
            return mid;
        else if (target < list.entry[mid].key)
            top = mid - 1;                  /* reduce to bottom third   */
 
        else {
            bottom = mid + 1;
            mid = (bottom + top) / 2;
            if (target == list.entry[mid].key)  /* successful search    */
                return mid;
 
            else if (target < list.entry[mid].key)
                top = mid - 1;          /* reduce to middle third   */
            else
                bottom = mid + 1;       /* reduce to top third      */
        }
    }
    return -1;
}
