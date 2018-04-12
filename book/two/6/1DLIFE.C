 
#include "general.h"

#define MAXSIZE 70

typedef enum status_tag { DEAD, ALIVE } Status_type;
typedef Status_type Grid_type[MAXSIZE];
typedef int Gridcount_type[MAXSIZE];

void ReadMap(Grid_type);
void WriteMap(Grid_type);
int NumNbrs(int, Grid_type);
void NewGen(Grid_type, Grid_type);
Boolean_type Enquire(void);

/* One-dimensional Life */
void main(void)
{
    int old, new;
    Grid_type map[2];   /* alternate maps when calculating next generation  */
    Gridcount_type nbrs;

    ReadMap(map[0]);
    WriteMap(map[0]);
    old = 0; new = 1;
 
    do {
        NewGen(map[old], map[new]);
        WriteMap(map[new]);
        if (new) {  /* swap maps    */
            old = 1;
            new = 0;
        } else {
            old = 0;
            new = 1;
        }
    } while (Enquire());
}
 
/* NewGen: calculate the next generation    */
void NewGen(Grid_type old, Grid_type new)
{
    int i;

    for (i = 0; i < MAXSIZE; i++) {
        switch(NumNbrs(i, old)) {
        case 0:
        case 1:
            new[i] = DEAD;
            break;
 
        case 2:
            new[i] = ALIVE;
            break;
 
        case 3:
            if (old[i] == DEAD)
                new[i] = ALIVE;
            else
                new[i] = DEAD;
            break;
 
        case 4:
            new[i] = old[i];
            break;
        }
    }
}
 
/* ReadMap: read the live cells coordinate from the user    */
void ReadMap(Grid_type map)
{
    int x;

    for (x = 0; x < MAXSIZE; x++)
        map[x] = DEAD;
 
    printf("Enter the numbers of the live cells (-1 to quit).\n");
    while (1) {
        scanf("%d", &x);
        if (x == -1)
            return;
        map[x] = ALIVE;
    }
}
 
/* WriteMap: display the map    */
void WriteMap(Grid_type map)
{
    int i;

    for (i = 0; i < MAXSIZE; i++)
        if (map[i] == ALIVE)
            printf("*");
        else
            printf(" ");
    printf("\n");
}
 
/* NumNbrs: determine the number of neighbors for a cell    */
int NumNbrs(int x, Grid_type map)
{
    int i;
    int num = 0;

    for (i = x-2; i < x+3; i++)
        if (i >= 0 && i < MAXSIZE && i != x)
            if (map[i] == ALIVE)
                num++;
    return num;
}
 
/* Enquire: TRUE if user wants to continue execution  */
Boolean_type Enquire(void)
{
     int  c;

     do {
          printf("Continue (y,n)? ");
          while ((c = getchar()) == '\n')
               ;                        /* ignore new line char. */
     } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
     if (c == 'y' || c == 'Y')
          return TRUE;
     else
          return FALSE;
}
