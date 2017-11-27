/****
* Gus Wiedey
* Data Structures
* life.c
****/

#include <life.h>

int main() {
  int i, row, col, neighbors;
  bool loopQuery;
  Grid map;
  Grid newMap;

  initMap(map);
  writeMap(map);

  printf("--        This is the initial configuration that you have chosen.        --\n");
  printf("-- Press < Enter > to view the next generation or any other key to quit. --\n");
  while(getchar() != '\n') { NOP }

  do {
    for(row = 1; row <= MAXROW; row++) {
      for(col = 1; col <= MAXCOL; col++) {
        neighbors = adjCount(map, row, col);
        switch(neighbors) {
          case 0:
          case 1:
            newMap[row][col] = dead;
            break;
          case 2:
            newMap[row][col] = map[row][col];
            break;
          case 3:
            newMap[row][col] = alive;
            break;
          default:
            newMap[row][col] = dead;
            break;
        }
      }
    }

    copyMap(map, newMap);
    writeMap(map);
    for(i = 0; i < MAXCOL; i++) { printf("="); }
    printf("\n");
  } while(fgetc(stdin) == '\n');

  return 0;
}

// This is a function that the textbook says to
// include; I found a more elegant solution but
// left this here just in case I ever want to use it
/*
bool loopQuery() {
  char c = getchar();
  if(c == '\n') {
    return true;
  } else {
    return false;
  }
}
*/
