 
#include "general.h"
#include "lifedef.h"
#include "global.h"
int Hash(int, int);
 /* GetCell: return the cell with coordinates (x,y) if it is present;
otherwise, create it.   */
Cell_type *GetCell(int x, int y)
{
    int location;       /* location returned by the hash function   */
    Cell_type *p;

    location = Hash(x, y);
    p = H[location];    /* p now points to the start of the chain containing the cell at i,j. */
 
    while (p != NULL)   /* Search the chain for the desired cell.   */
        if (p->row == x && p->col == y)
            return p;
        else
            p = p->next;
 
/* If the cell was not found we must create a new cell, initialize it, and
insert it into the hash table.  */
    p = (Cell_type *)malloc(sizeof(Cell_type));
    p->row = x;
    p->col = y;
    p->state = DEAD;
 
    p->nbrs = 0;
    p->next = H[location];
    H[location] = p;

    return p;
}
