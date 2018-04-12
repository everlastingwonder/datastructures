 
#include "general.h"

#define SIZE 10

typedef int Grid_type[SIZE][SIZE];

Boolean_type SumRow(Grid_type, int *);
Boolean_type SumColumn(Grid_type, int);
Boolean_type SumDiagonal(Grid_type, int);
void ReadGrid(Grid_type);

int size;

/* determine if a grid is a magic square    */
void main(void)
{
    int sum;
    Boolean_type magic;
    Grid_type grid;

    ReadGrid(grid);
    if ((magic = SumRow(grid, &sum)))
        if ((magic = SumColumn(grid, sum)))
            magic = SumDiagonal(grid, sum);
 
    if (magic)
        printf("This is a magic square.\n");
    else
        printf("This is not a magic square.\n");
}
 

/* ReadGrid: reads the magic square */
void ReadGrid(Grid_type grid)
{
    int i, j;

    printf("Enter the size: ");
    scanf("%d", &size);
 
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            scanf("%d", &grid[i][j]);
}
 
/* SumRow: returns TRUE if all the rows sum to the same value   */
Boolean_type SumRow(Grid_type grid, int *sum)
{
    int i, j, temp;
    Boolean_type magic = TRUE;

    i = 0;
    do {
        temp = 0;
        for (j = 0; j < size; j++)
            temp += grid[i][j];
 
        if (i == 0)
            *sum = temp;
        else
            magic = (temp == *sum);
        i++;
    } while (i < size && magic);
    return magic;
}
 
/* SumColumn: returns TRUE if all the columns sum to the same value */
Boolean_type SumColumn(Grid_type grid, int sum)
{
    int i, j, temp;
    Boolean_type magic = TRUE;

    i = 0;
    do {
        temp = 0;
        for (j = 0; j < size; j++)
            temp += grid[j][i];
        magic = (temp == sum);
        i++;
    } while (i < size && magic);
    return magic;
}
 
/* SumDiagonal: returns TRUE if the diagonals sum to the same value */
Boolean_type SumDiagonal(Grid_type grid, int sum)
{
    int i, j, temp;
    Boolean_type magic = TRUE;

    temp = 0;
    for (i = 0; i < size; i++)
        temp += grid[i][i];
    if (temp != sum)
        return FALSE;
 
    temp = 0;
    j = size - 1;
    for (i = 0; i < size; i++) {
        temp += grid[i][j];
        j--;
    }
    return temp == sum;
}
