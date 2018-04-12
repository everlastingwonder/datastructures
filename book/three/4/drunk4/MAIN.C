#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* driver for Random Walk program							*/
void main(void)
{
	int choice;					/* choice of directions		*/
	int count[RUNMAX];			/* no. of moves per run		*/
	int i;
	int inbounds;				/* TRUE if move was inbounds*/
	int maxrow, maxcol;			/* user defined size of grid*/
	int moves;					/* no. of moves current run	*/
	Position_type place;
	int runs;					/* no. of runs current grid	*/
	Matrix_type streets;		/* drunk's new memory		*/

	Randomize();
	Title();					/* display the title		*/
	do {
		GetInfo(&maxrow, &maxcol, &runs);
		Initialize(streets, maxrow, maxcol);
		for (i = 1; i <= runs; i++) {
			printf("Starting run %d\n", i);
			Start(&moves, &place, maxcol, streets);
			do {
				do {
					Choose(&place, &choice, maxrow, maxcol,
						   streets);
					CheckBounds(&place, choice, &inbounds, 
								maxrow, maxcol);
				} while(!inbounds);
				Move(place, &moves, streets);
			} while (!Home(place, maxrow));
			count[i] = moves;
			printf("The drunk got home after %d\n\n", moves);
		}
		Results(runs, count, maxrow, maxcol);
	} while (Enquire());
}
