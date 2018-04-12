 
#include "general.h"
#include "array.h"

int Binary1(List_type, Key_type);

/* test driver for binary1  */
void main(void)
{
    List_type L;
    int loc, i;

    for (i = 0; i < 10; i++) {
        L.entry[i].key = i*2;
    }
    L.count = i;

    for (i = 0; i < 20; i++)
        if ((loc = Binary1(L, i)) != -1)
            printf("found %d at %d\n", i, loc);

    L.count--;
    for (i = 0; i < 20; i++)
        if ((loc = Binary1(L, i)) != -1)
            printf("found %d at %d\n", i, loc);
}
