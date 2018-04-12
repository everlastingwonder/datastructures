#include	<limits.h>
#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* Choose: choose the next direction via a random number	*/
void Choose(Position_type *p, int *choice, int maxrow, 
			int maxcol, Matrix_type streets)
{
	do {
		*choice = Select(0, 3);
	} while (!NewDirection(p, *choice, maxrow, maxcol, streets));
	switch(*choice) {
	case 0:
		p->row--;
		break;
	case 1:
		p->row++;
		break;
	case 2:
		p->col++;
		break;
	case 3:
		p->col--; 
		break;
	}
}

/* Select: generate a random number between low and high	*/
int Select(int low, int high)
{
	return low + (int) (rand() / (float) INT_MAX * 
		   (high - low + 1));
}

/* NewDirection: TRUE if the direction has been tried 		*/
/*				 before or if all paths have been tried		*/
Boolean_type NewDirection(Position_type *p, int choice, 
				 int maxrow, int maxcol, Matrix_type streets)
{
	Boolean_type all, newpath;

	newpath = FALSE;
	switch(choice) {
	case 0:
		if (p->row > 0)
			newpath = !streets[p->row - 1][p->col];
		break;
	case 1:
		if (p->row < maxrow - 1)
			newpath = !streets[p->row + 1][p->col];
		break;
	case 2:
		if (p->col < maxcol - 1)
			newpath = !streets[p->row][p->col + 1];
		break;
	case 3:
		if (p->col > 0)
			newpath = !streets[p->row][p->col - 1];
		break;
	}
	all = TRUE;
	if (p->row > 0) 
		all = all && streets[p->row - 1][p->col];
	if (p->row < maxrow - 1)
		all = all && streets[p->row + 1][p->col];
	if (p->col > 0)
		all = all && streets[p->row][p->col - 1];
	if (p->col < maxcol - 1)
		all = all && streets[p->row][p->col + 1];
	return all || newpath;
}
