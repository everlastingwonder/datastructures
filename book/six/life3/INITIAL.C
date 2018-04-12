 
#include "general.h"
#include "lifedef.h"
#include "calls.h"
#include "global.h"

/* Initialize: initialize lists and grid    */
void Initialize(void)
{
    int i;
    int row, col;           /* coordinates of a cell    */
    Cell_type *c;

    for (i = 0; i < HASHSIZE; i++)
        H[i] = NULL;
    live = nextlive = NULL;
    die = nextdie = NULL;

    printf("On each line give a pair of coordinates for a living cell.\n");
    printf("Terminate the list with the the special pair -1 -1\n");
    scanf("%d %d", &row, &col);
    while (row != -1 || col != -1) {    /* check for termination    */
        if (row >= 0 && col >= 0) {
            c = GetCell(row, col);
            c->state = ALIVE;
            live = Insert(live, c);
        } else
            printf("Values are not within range.\n");
        scanf("%d %d", &row, &col);
    }

    AddNeighbors();
    die = live;
    live = nextlive;
    nextlive = NULL;
}
