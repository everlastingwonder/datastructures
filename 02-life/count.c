/****
* Gus Wiedey
* Data Structures
* count.c
* Calculates and returns the number of living cells adjacent to a given cell (including diagonally).
****/

#include <life.h>

int adjCount(Grid map, int row, int col) {
  // variable declarations
  int i, j, count = 0;

  // count the number of living cells in a 3x3 space centered on the target cell *including the cell itself*
  for(i = (row - 1); i <= (row + 1); i++) {
    for(j = (col - 1); j <= (col + 1); j++) {
      if(map[i][j] == alive) {
        count++;
      }
    }
  }

  // decrement count if the for loops caught the actual cell being looked at
  if(map[row][col] == alive) { count--; }

  // return final value
  return count;
}
