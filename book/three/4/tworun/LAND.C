#include	"general.h"
#include	"simdefs.h"

/* Land: process a plane p that is actually landing			*/
void Land(Plane_type p, int curtime, int *nland, int *landwait,
		  int runway)
{
	int wait;

	wait = curtime - p.tm;
	printf("%3d : Plane %3d landed on runway %d ", curtime, 
			p.id, runway);
	printf("in queue %d units.\n", wait);
	(*nland)++;
	*landwait += wait;
}
