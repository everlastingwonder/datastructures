#include	"general.h"
#include	"simdefs.h"

/* Land: process a plane p that is actually landing			*/
void Land(Plane_type p, int curtime, int *nland, 
		  int *landwait, int *ncrashed)
{
	int wait;

	wait = curtime - p.tm;
	if (p.fuel < wait) {
		printf("      Plane %3d ran out of fuel and crashed.\n",
				p.id);
		(*ncrashed)++;
	} else {
		printf("%3d : Plane %3d landed; in queue %d units.\n",
				curtime, p.id, wait);
		(*nland)++;
		*landwait += wait;
	}
}
