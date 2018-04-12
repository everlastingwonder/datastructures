 
#define MAXROW  50      /* maximum number of rows allowed       */
#define MAXCOL  80      /* maximum number of columns allowed    */
#define MAXLIST 100     /* maximum number of elements in a list */

typedef enum status_tag { DEAD, ALIVE } Status_type;    /* status of cell   */

typedef Status_type Grid_type[MAXROW][MAXCOL];  /* grid definition  */

typedef int Gridcount_type[MAXROW][MAXCOL];

typedef struct coord_tag {
     int row;
     int col;
} Coord_type;

typedef struct list_tag {
     int count;
     Coord_type entry[MAXLIST];
} List_type;
