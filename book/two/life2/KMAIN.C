 
#include "general.h"
#include "lifedef.h"

void Initialize(Grid_type, Gridcount_type, List_type *);
void WriteMap(Grid_type);
void WriteNumbernbrs(Gridcount_type);
void WriteList(List_type);
void Kill(List_type *, Grid_type, Gridcount_type);

/* test driver for kill */
void main(void)
{
    Grid_type map;
    Gridcount_type numbernbrs;
    List_type live, die, nextlive, nextdie;

    Initialize(map, numbernbrs, &die);
    WriteMap(map);
    WriteList(die);
    printf("calling Kill\n");
    Kill(&die, map, numbernbrs);
    WriteMap(map);
    WriteNumbernbrs(numbernbrs);
    WriteList(die);
}
 

/* Initialize: set up some variables    */
void Initialize(Grid_type map, Gridcount_type numbernbrs, List_type *list)
{
    int i,j;

    for (i = 0; i < MAXROW; i++)
        for (j = 0; j < MAXCOL; j++) {
            map[i][j] = ALIVE;
            numbernbrs[i][j] = 4;
        }
    for (i = 0; i < MAXROW; i++) {
        list->entry[i].row = i;
        list->entry[i].col = i;
        numbernbrs[i][i] = 3 + i%2;
    }
    list->count = 5;
}
 

/* WriteMap: prints the map using * for live cells, blanks for dead ones    */
void WriteMap(Grid_type map)
{
    int i, j;

    printf("WriteMap\n");
    for (i = 0; i < MAXROW; i++) {
        for (j = 0; j < MAXCOL; j++)
            if (map[i][j] == ALIVE)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}
 

/* WriteNumbernbrs: prints the contents of numbernbrs   */
void WriteNumbernbrs(Gridcount_type numbernbrs)
{
    int i, j;

    printf("WriteNumbernbrs\n");
    for (i = 0; i < MAXROW; i++) {
        for (j = 0; j < MAXCOL; j++)
            printf("%d ", numbernbrs[i][j]);
        printf("\n");
    }
}
 

/* WriteList: prints the contents of list   */
void WriteList(List_type list)
{
    int i;

    printf("WriteList\n");
    printf("count = %d\n", list.count);
    for (i = 0; i < list.count; i++)
        printf("%d, %d\n", list.entry[i].row, list.entry[i].col);
}
