#include	"general.h"
#include	"defs.h"

/* Move: show where the drunk has moved and update moves	*/
void Move(Position_type p, int *moves)
{
	printf("The drunk has walked to row %d, column %d\n",
		   p.row, p.col);
	(*moves)++;
}

/* Home: return non-zero if current position is home		*/
Boolean_type Home(Position_type p, int maxrow)
{
	return p.row == maxrow-1 && p.col == 0;
}
