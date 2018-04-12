 
#include "array.h"

#define EQ(a,b) ((a) == (b))

 /* SequentialSearch: contiguous version */
int SequentialSearch(List_type list, Key_type target)
{
    int location;

    for (location = 0; location < list.count; location++)
        if (EQ(list.entry[location].key, target))
            return location;
    return -1;
}
