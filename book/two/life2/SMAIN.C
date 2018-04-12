 
#include "general.h"
#include "lifedef.h"

void Initialize(Grid_type, Gridcount_type, List_type *);
void WriteNumbernbrs(Gridcount_type);
void WriteList(List_type);
void WriteMap(Grid_type);
void SubtractNeighbors(List_type *, List_type *, List_type *,
                        Gridcount_type, Grid_type);

/* test driver for SubtractNeighbors    */
void main(void)
{
    Grid_type map;
    Gridcount_type numbernbrs;
    List_type live, die, nextlive, nextdie;

    Initialize(map, numbernbrs, &die);
    nextlive.count = nextdie.count = 0;
    WriteNumbernbrs(numbernbrs);
    WriteMap(map);
    SubtractNeighbors(&die, &nextlive, &nextdie, numbernbrs, map);
    WriteNumbernbrs(numbernbrs);
    printf("list die\n");
    WriteList(die);
    printf("list nextlive\n");
    WriteList(nextlive);
    printf("list nextdie\n");
    WriteList(nextdie);
}
 

/* Initialize: initialize variables */
void Initialize(Grid_type map, Gridcount_type numbernbrs, List_type *list)
{
    int i,j;

    for (i = 0; i < MAXROW; i++)
        for (j = 0; j < MAXCOL; j++) {
            map[i][j] = DEAD;
            numbernbrs[i][j] = 4;
        }
    for (i = 0; i < MAXROW; i++) {
        list->entry[i].row = i;
        list->entry[i].col = i;
        map[i][i] = ALIVE;
        numbernbrs[i][i] = 3;
    }
    list->count = 5;
}
 

/* WriteNumbernbrs: display the number of neighbors for each cell   */
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
 

/* WriteList: display the contents of a list    */
void WriteList(List_type list)
{
    int i;

    printf("count = %d\n", list.count);
    for (i = 0; i < list.count; i++)
        printf("%d, %d\n", list.entry[i].row, list.entry[i].col);
}
 

/* WriteMap: display the map    */
void WriteMap(Grid_type map)
{
     int row, col;

     printf("\n\n");
     for (row = 0; row < MAXROW; row++) {
          for (col = 0; col < MAXCOL; col++)
               if (map[row][col] == ALIVE)
                    printf("*");
               else
                    printf("-");
          printf("\n");
     }
}
