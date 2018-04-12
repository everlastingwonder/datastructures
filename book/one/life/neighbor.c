 
#include        "lifedef.h"
 
/* NeighborCount:  count neighbors of row,col.          */
int     NeighborCount(int row, int col, Grid_type map)
{
        int i, j;                               /* loop indices for row, column */
        int rlow, rhigh;                /* limits for row loop                  */
        int clow, chigh;                /* limits for column loop               */
        int count;                              /* Count neighbors.                             */

 
        if (row <= 0)                   /* Determine the boundaries.    */
                rlow = 0;
        else
                rlow = row - 1;
        if (row >= MAXROW-1)
                rhigh = MAXROW-1;
        else
                rhigh = row + 1;
        if (col <= 0)
                clow = 0;
        else
                clow = col - 1;
        if (col >= MAXCOL-1)
                chigh = MAXCOL-1;
        else
                chigh = col + 1;
 
        count = 0;                              /* Nested loops count neighbors.*/
        for (i = rlow; i <= rhigh; i++)
                for (j = clow; j <= chigh; j++)
                        if (map[i][j] == ALIVE)
                                count++;
        if (map[row][col] == ALIVE)
                count--;
        return count;
}
