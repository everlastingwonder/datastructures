#include "array.h"

/* SequentialSearch: sentinel version */
int SequentialSearch(List_type list, Key_type target)
{
    int location = 0;

    list.entry[list.count].key = target;    /* set the sentinel */

    /* increment location until ^:target is found   */
    while (list.entry[location].key != target)
            location++;
    if (location < list.count)
        return location;
    else
        return -1;
}
