/****
* Gus Wiedey
* Data Structures
* map.c
****/

#include <life.h>

void initMap(Grid map) {
  //variable declarations
  int i, j, row, col;
  char art[100];

  //load and print the awesome ASCII art title I made, along with the board dimensions
  FILE *title = fopen("title.txt", "r");
  fgets(art, 100, title);
  while(!feof(title)) {
    fputs(art, stdout);
    fgets(art, 100, title);
  }
  fclose(title);
  printf("\nGrid size: %d x %d\n", MAXROW, MAXCOL);

  //set every cell in the grid to dead
  for(i = 1; i <= (MAXROW + 1); i++) {
    for(j = 1; j <= (MAXCOL + 1); j++) {
      map[i][j] = dead;
    }
  }

  //get starting configuration from the user
  printf("Enter a list of coordinates for living cells (one per line), ending with \'0 0\'\n");
  scanf("%d %d", &row, &col);
  printf("%d %d\n", row, col);
  while(row != 0 || col != 0) {
    if((row >= 1) && (row <= MAXROW) && (col >= 1) && (col <= MAXCOL)) {
      map[row][col] = alive;
    } else {
      printf("ERROR: One or more input values are invalid\n");
    }
    scanf("%d %d", &row, &col);
    printf("%d %d\n", row, col);
  }
  printf("\n");

  //discard remaining characters
  while(fgetc(stdin) != '\n') { NOP }
}

void writeMap(Grid map) {
  //variable declarations
  int row, col;

  //print out grid
  for(row = 1; row <= MAXROW; row++) {
    for(col = 1; col <= MAXCOL; col++) {
      switch(map[row][col]) {
        case alive:
          fputc('0', stdout);
          break;
        case dead:
          fputc('.', stdout);
          break;
      }
    }
    fputc('\n', stdout);
  }
}

void copyMap(Grid map, Grid newMap) {
  //variable declarations
  int row, col;

  //copy newMap into map
  for(row = 0; row <= (MAXROW + 1); row++) {
    for(col = 0; col <= (MAXCOL + 1); col++) {
      map[row][col] = newMap[row][col];
    }
  }
}