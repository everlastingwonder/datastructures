 
#include "lifedef.h"

void Kill(List_type *die, Grid_type map, Gridcount_type numbernbrs)
{
     int k, row, col;

     k = 0;
     while (k < die->count) {
          row = die->entry[k].row;
          col = die->entry[k].col;
          if (map[row][col] == ALIVE && (numbernbrs[row][col] <= 1 ||
                                        numbernbrs[row][col] >= 4)) {
               map[row][col] = DEAD;
               k++;
          } else {
               die->count--;
               die->entry[k] = die->entry[die->count];
          }
     }
}
