 
#include "general.h"
#include "lifedef.h"
#include "calls.h"
#include "global.h"

 /* AddNeighbors: increase neighbor count by 1.  */
void AddNeighbors(void)
{
    int x, y;               /* row and column of a neighbor */
    Node_type *p, *q;
    Cell_type *neighbor;    /* cell with coordinates (x,y)  */
    Cell_type *c;

    while (live != NULL) {
        if (live->entry != NULL) {
            c = live->entry;
            for (x = c->row-1; x <= c->row+1; x++)
                for (y = c->col-1; y <= c->col+1; y++)
 
                    if (x != c->row || y != c->col) {
                        neighbor = GetCell(x, y);
                        neighbor->nbrs++;
                        switch(neighbor->nbrs) {
 
                        case 3:
                            if (neighbor->state == DEAD)
                                nextlive = Insert(nextlive, neighbor);
                            break;
 
                        case 4:
                            if (neighbor->state == ALIVE)
                                nextdie = Insert(nextdie, neighbor);
                            break;
                        }
                    }
        }
 
        p = live;
        live = live->next;
        free(p);
    }
}
