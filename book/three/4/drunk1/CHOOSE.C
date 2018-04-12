#include	<limits.h>
#include	"general.h"
#include	"defs.h"
#include	"calls.h"

/* Choose: choose the next direction via a random number	*/
void Choose(Position_type *p, int *choice)
{
	*choice = Select(0, 3);
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

/* CheckBounds: check for proper boundaries and adjust		*/
void CheckBounds(Position_type *p, int choice, 
				 int *inbounds, int maxrow, int maxcol)
{
	*inbounds = p->row >= 0 && p->row < maxrow &&
				p->col >= 0 && p->col < maxcol;
	if (!*inbounds) 
		switch(choice) {
		case 0:
			p->row++;
			break;
		case 1:
			p->row--;
			break;
		case 2:
			p->col--;
			break;
		case 3:
			p->col++;
			break;
		}
}
