 
#include "lifedef.h"

 /* Vivify: make cells alive and checks for duplicates   */
void Vivify(List_type *live, Grid_type map, Gridcount_type numbernbrs)
{
     int k, row, col;

     k = 0;
     while (k < live->count) {
          row = live->entry[k].row;
          col = live->entry[k].col;
          if (map[row][col] == DEAD && numbernbrs[row][col] == 3) {
               map[row][col] = ALIVE;   /* Make the cell alive. */
               k++;
 
          } else {  /* Delete entry k from the list.  */
               live->count--;
               live->entry[k] = live->entry[live->count];
          }
     }
}
