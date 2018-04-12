 
#include "general.h"
#include "lifedef.h"
#include "calls.h"

/* SubtractNeighbors: update the neighbors of a killed cell */
void SubtractNeighbors(List_type *die, List_type *nextlive, List_type *nextdie,
                        Gridcount_type numbernbrs, Grid_type map)
{
    int i, j;           /* loop indices             */
    int ilow, ihigh;    /* row loop limits          */
    int jlow, jhigh;    /* column loop limits       */
    int k, row, col;    /* used to traverse list    */
    Coord_type nbr;

    for (k = 0; k < die->count; k++) {  /* loop through killed cells    */
        row = die->entry[k].row;
        col = die->entry[k].col;
 
        if (row <= 0)
            ilow = 0;
        else
            ilow = row-1;
 
        if (row >= MAXROW-1)
            ihigh = MAXROW-1;
        else
            ihigh = row+1;
 
        if (col <= 0)
            jlow = 0;
        else
            jlow = col-1;
 
        if (col >= MAXCOL-1)
            jhigh = MAXCOL-1;
        else
            jhigh = col+1;
 
        for (i = ilow; i <= ihigh; i++)
            for (j = jlow; j <= jhigh; j++)
                if (i != row || j != col) { /* skip the cell itself */
                    nbr.row = i;
                    nbr.col = j;
                    numbernbrs[i][j] -= 1;
                    switch (numbernbrs[i][j]) {
                    case 1:
                        if (map[i][j] == ALIVE)
                            Add(nextdie, nbr);
                        break;
 
                    case 3:
                        if (map[i][j] == DEAD)
                            Add(nextlive, nbr);
                        break;
 
                    case 8:
                        printf("Impossible case in SubtractNeighbors\n");
                        break;
                    }
                }
    }
}
