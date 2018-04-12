 
#include  "general.h"
#include  "lifedef.h"

/* Initialize: initialize map for life game.    */
void Initialize(Grid_type map)
{
    int row, col;   /* The coordinates of a cell.   */
    int ch;

    printf("This program is a simulation of the game of Life.\n\n");
    printf("On each line give a sequence of blanks and X's to indicate\n");
    printf("dead and living cells respectively.  Trailing blanks need\n");
    printf("not be entered.\n");
 
    for (row = 0; row < MAXROW; row++) {
        col = 0;
        while ((ch = getchar()) != '\n' && col < MAXCOL) {
            if (ch == 'X' || ch == 'x')     /* ignore case  */
                map[row][col] = ALIVE;
            else
                map[row][col] = DEAD;
            col++;
        }
 
        if (col == MAXCOL) {    /* Make sure it isn't too long. */
            printf("Preceding line truncated to %d characters.\n", MAXCOL);
            while ((ch = getchar()) != '\n')
                ;
        }
        while (col < MAXCOL) {  /* make the rest dead   */
            map[row][col] = DEAD;
            col++;
        }
    }
}
