#include	"general.h"
#include	"defs.h"

/* CheckBounds: check for proper boundaries and adjust		*/
void CheckBounds(Position_type *p, int choice, int *inbounds,
				 int maxrow, int maxcol)
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
