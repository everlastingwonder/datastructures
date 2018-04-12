 
#include "array.h"

#define EQ(a, b)    ((a) == (b))
#define LT(a, b)    ((a) < (b))

 /* Binary2: version that recognizes discovery of the target */
int Binary2(List_type list, Key_type target)
{
    int top, bottom, middle;    /* middle will be index of target if found. */

    top = list.count - 1;       /* Initialize variables.    */
    bottom = 0;
 
    while (top >= bottom) {             /* Check terminating conditions.    */
        middle = (top + bottom) / 2;
        if (EQ(list.entry[middle].key, target)) /* Successful search.       */
            return middle;
 
        else if (LT(list.entry[middle].key, target))
            bottom = middle + 1;        /* Reduce to top half of the list.  */
        else
            top = middle - 1;           /* Reduce to bottom half of list.   */
    }
    return -1;
}
