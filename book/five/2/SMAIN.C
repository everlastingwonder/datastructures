#include "\text\ds\lib\general.h"
#include "array.h"

int SequentialSearch(List_type, Key_type);

/* test driver for contiguous version of SequentialSearch   */
void main(void)
{
    List_type list;
    int loc, i;

    for (i = 0; i < 10; i++)
        list.entry[i].key = i*2;
    list.count = i;

    for (i = -1; i < 20; i++)
        if ((loc = SequentialSearch(list, i)) != -1)
            printf("found %d at %d\n", i, loc);
}
