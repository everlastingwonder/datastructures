#include	"general.h"
#include	"defs.h"

/* Results: calculate and print the results of all runs		*/
void Results(int runs, int count[], int maxrow, int maxcol)
{
	int i, total = 0;

	printf("This simulation was run %d times ", runs);
	printf("on a %d by %d playing grid.\n", maxrow, maxcol);
	for (i = 1; i <= runs; i++) {
		total += count[i];
		printf("The number of moves for run %d was %d\n",
			   i, count[i]);
	}
	printf("The average number of moves per run was %lf\n",
		   (double) total / runs);
}
