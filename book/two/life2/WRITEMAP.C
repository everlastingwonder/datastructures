 
#include "general.h"
#include "lifedef.h"
 /* WriteMap: displays the current state of the grid */
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
