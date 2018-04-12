#include	"general.h"
#include	"defs.h"

/* Home: return non-zero if current position is home	*/
Boolean_type Home(Position_type p, int maxrow)
{
	return p.row == 0 && p.col == 0;
}

