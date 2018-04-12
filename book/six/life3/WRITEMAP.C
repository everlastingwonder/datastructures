 
#include "general.h"
#include "lifedef.h"
#include "calls.h"
#include "global.h"

void WriteMap(void)
{
    int i, j;
    Cell_type *c;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            c = GetCell(i, j);
            if (c->state == ALIVE)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
}
