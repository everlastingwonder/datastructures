 
#define MAXROW  50      /* maximum number of rows allowed       */
#define MAXCOL  80      /* maximum number of columns allowed    */

typedef enum status_tag { DEAD, ALIVE } Status_type;    /* status of a cell */

typedef Status_type Grid_type[MAXROW][MAXCOL];  /* array definition */

typedef int Gridcount_type[MAXROW][MAXCOL];
