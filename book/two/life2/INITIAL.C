 
#include "lifedef.h"
#include "calls.h"

 /* Initialize: set up the lists and grid.   */
void Initialize(List_type *live, List_type *die, List_type *nextlive,
            List_type *nextdie, Grid_type map, Gridcount_type numbernbrs)
{
    int row, col;   /* used to set all entries in numbernbrs to 0 */

    ReadMap(live, map); /* initializes map  */
    for (row = 0; row < MAXROW; row++) /* Set all the entries in numbernbrs to 0. */
        for (col = 0; col < MAXCOL; col++)
            numbernbrs[row][col] = 0;
 
    nextlive->count = 0;    /* Initialize the lists used by AddNeighbors. */
    nextdie->count = 0;
    AddNeighbors(live, nextlive, nextdie, numbernbrs, map);
    /* Some of the cells just read in could die in the
    first generation.  Kill will catch them.  */
    Copy(die, live);
    Copy(live, nextlive);   /* Put output from AddNeighbors where needed. */
    nextdie->count = 0;
}
