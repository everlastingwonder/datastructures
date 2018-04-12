 
#include "general.h"
#include "lifedef.h"
#include "calls.h"
#include "global.h"

void SubtractNeighbors(void)
{
    int x, y;               /* row and column of a neighbor */
    Node_type *p;           /* used to delete nodes         */
    Cell_type *c;
    Cell_type *neighbor;    /* cell with coordinates (x,y)  */

    while (die != NULL) {
        if (die->entry != NULL) {
            c = die->entry;
            for (x = c->row-1; x <= c->row+1; x++)
                for (y = c->col-1; y <= c->col+1; y++)
                    if (x != c->row || y != c->col) {
                        neighbor = GetCell(x, y);
                        neighbor->nbrs--;
                        switch(neighbor->nbrs) {
                        case 0:
                            if (neighbor->state == DEAD)
                                free(neighbor);
                            break;
 
                        case 1:
                            if (neighbor->state == ALIVE)
                                nextdie = Insert(nextdie, neighbor);
                            break;
 
                        case 3:
                            if (neighbor->state == DEAD)
                                nextlive = Insert(nextlive, neighbor);
                            break;
                        }
                    }
        }
 
        p = die;
        die = die->next;
        free(p);
    }
}
