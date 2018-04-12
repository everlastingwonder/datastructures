#include "general.h"
#include "lifedef.h"
#include "calls.h"

/* ReadMap: read the coordinates of live cells  */
void ReadMap(List_type *live, Grid_type map)
{
    Coord_type c;
    int row, col;           /* coordinates of a cell    */

    for (row = 0; row < MAXROW; row++)
        for (col = 0; col < MAXCOL; col++)
            map[row][col] = DEAD;
 
    printf("On each line give a pair of coordinates for a living cell.\n");
    printf("Terminate the list with the the special pair -1 -1\n");
    scanf("%d %d", &row, &col);
 
    while (row != -1 || col != -1) {    /* check for termination    */
        if (row >= 0 && row < MAXROW && col >= 0 && col < MAXCOL) {
            map[row][col] = ALIVE;
            c.row = row;
            c.col = col;
            Add(live, c);
 
        } else
            printf("Values are not within range.\n");
        scanf("%d %d", &row, &col);
    }
}
