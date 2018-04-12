 
#include "general.h"
#include "lifedef.h"
#include "calls.h"

 /* AddNeighbors: increase the neighbor count of vivified cells  */
void AddNeighbors(List_type *live, List_type *nextlive, List_type *nextdie,
                Gridcount_type numbernbrs, Grid_type map)
{
    int i, j;           /* loop indices             */
    int ilow, ihigh;    /* row loop limits          */
    int jlow, jhigh;    /* column loop limits       */
    int k, row, col;    /* used to traverse list    */
    Coord_type nbr; /* structure form of a neighbor */

    for (k = 0; k < live->count; k++) { /* Loop through vivified cells. */
        row = live->entry[k].row;
        col = live->entry[k].col;
 
        if (row <= 0)           /* Set the loop limits. */
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
                if (i != row || j != col) { /* Skip the cell itself.    */
                    nbr.row = i;    /* Set up a coordinate structure.   */
                    nbr.col = j;
                    numbernbrs[i][j]++;
                    switch (numbernbrs[i][j]) {
                    case 0:
                        printf("Impossible case in AddNeighbors.\n");
                        break;
 
                    case 3:
                        if (map[i][j] == DEAD)
                        Add(nextlive, nbr);
                        break;
 
                    case 4:
                        if (map[i][j] == ALIVE)
                        Add(nextdie, nbr);
                        break;
                    } /* switch statement */
                }
    } /* k loop   */
}
