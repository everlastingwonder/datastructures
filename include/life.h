#ifndef _MY_LIFE_H_
#define _MY_LIFE_H_

#include <common.h>

#define MAXROW 20
#define MAXCOL 50

enum STATE {
  dead = 0,
  alive = 1
};
typedef enum STATE State;

typedef State Grid[MAXROW + 2][MAXCOL + 2];

void initMap(Grid);
void copyMap(Grid, Grid);
void writeMap(Grid);
int adjCount(Grid, int, int);

#endif /* _MY_LIFE_H_ */
