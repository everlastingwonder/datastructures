#include	"general.h"
#include	"defs.h"

/* Start: place drunk at starting position at the pub		*/
void Start(int *moves, Position_type *place, int maxcol, 
		   Matrix_type streets)
{
	*moves = 0;
	place->row = 0;
	place->col = maxcol - 1;
	printf("He is now at the pub; row %d, column %d\n",
		   place->row, place->col);
	streets[place->row][place->col] = TRUE;
}
