#include	"general.h"
#include	"defs.h"

/* Pub: return non-zero if the drunk arrives back at the pub */
Boolean_type Pub(Position_type p, int maxcol)
{
	return p.row == 0 && p.col == maxcol-1;
}
