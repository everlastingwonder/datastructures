#include	"general.h"
#include	"defs.h"
#include	"calls.h"

void GetInfo(int *maxrow, int *maxcol, int *runs)
{
	printf("How many rows on the grid? (Max %d)\n", 
			GRIDMAX);
	*maxrow = GetNumber(2, GRIDMAX);
	printf("How many columns on the grid? (Max %d)\n", 
			GRIDMAX);
	*maxcol = GetNumber(2, GRIDMAX);
	printf("How many times is the program to run? "
		   "(Max %d)\n", RUNMAX);
	*runs = GetNumber(1, RUNMAX);
	printf("Specified: %d runs on %d x %d\n",
		   *runs, *maxrow, *maxcol);
}
