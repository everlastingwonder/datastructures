#include "general.h"
#include "lifedef.h"
 
extern int maxrow, maxcol;  /* global definitions   */

/* Initialize: new version that queries the user for the grid size. */
void Initialize(Grid_type map)
{
    int row, col;           /* The coordinates of a cell.   */

    printf("This program is a simulation of the game of Life.\n");
    while (1) {
        printf("Enter the grid size as two numbers: ");
        scanf("%d %d", &maxrow, &maxcol);
        if (maxrow <= 0 || maxrow > MAXROW || maxcol <= 0 || maxcol > MAXCOL)
            printf("Invalid grid size.\n");
        else
            break;
    }
 
    for (row = 0; row < maxrow; row++)
        for (col = 0; col < maxcol; col++)
            map[row][col] = DEAD;   /* Initialize the grid. */
 
    printf("On each line give a pair of coordinates for a living cell.\n");
    printf("Terminate the list with the the special pair -1 -1.\n");
    scanf("%d %d", &row, &col);
    while (row != -1 || col != -1) {    /* Check for termination.   */
        if (row >= 0 && row < maxrow && col >= 0 && col < maxcol)
            map[row][col] = ALIVE;
        else
            printf("Values are not within range.\n");
        scanf("%d %d", &row, &col);
    }
}
