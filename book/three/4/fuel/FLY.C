#include	"general.h"
#include	"simdefs.h"

/* Fly: process a plane p that is actually taking off		*/
void Fly(Plane_type p, int curtime, int *ntakeoff, int *takeoffwait)
{
	int wait;

	wait = curtime - p.tm;
	printf("%3d : Plane %3d took off; in queue %d units.\n",
			curtime, p.id, wait);
	(*ntakeoff)++;
	*takeoffwait += wait;
}
