 
#include "general.h"
#include "array.h"

int InterpSearch(List_type, Key_type);

/* test driver for InterpSearch   */
void main(void)
{
    List_type L;
    int loc, i;

    for (i = 0; i < 10; i++)
        L.entry[i].key = i*2;
    L.count = i;

    for (i = 0; i < 20; i++)
        if ((loc = InterpSearch(L, i)) != -1)
            printf("found %d at %d\n", i, loc);

    L.count--;  /* check for odd length list */
    for (i = 0; i < 20; i++)
        if ((loc = InterpSearch(L, i)) != -1)
            printf("found %d at %d\n", i, loc);
}
