 
#include "general.h"

#define SIZE 5  /* square size, must be odd */

int nexti(int);
int nextj(int);

/* generates a magic square of dimension SIZE   */
void main(void)
{
     int i, j;
     int square[SIZE][SIZE];
     int count = 0;

     for (i = 0; i < SIZE; i++)
          for (j = 0; j < SIZE; j++)
               square[i][j] = 0;
 
     i = 0;
     j = (SIZE-1)/2;
     do {
          count++;
          square[i][j] = count;
          if  (square[nexti(i)][nextj(j)] != 0)
               i = nextj(i);
          else {
               i = nexti(i);
               j = nextj(j);
          }
     } while (count != SIZE*SIZE);
 
     /* display the square  */
     for (i = 0; i < SIZE; i++) {
          for (j = 0; j < SIZE; j++)
               printf("%2d ", square[i][j]);
          printf("\n");
     }
}
 
/* nexti: moves up rows, looping to the bottom upon reaching the top    */
int nexti(int i)
{
     if (i <= 0)
          return SIZE-1;
     else
          return --i;
}
 
/* nextj: moves across columns, looping to the left upon reaching the right */
int nextj(int j)
{
     j++;
     if (j == SIZE)
          return 0;
     else
          return j;
}
