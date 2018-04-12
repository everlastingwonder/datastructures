#include	"general.h"
#include	"simdefs.h"
#include	"calls.h"

/* NewPlane: make a new record for a plane, update nplanes	*/
void NewPlane(Plane_type *p, int *nplanes, int curtime, 
			  Action_type kind, double expectfuel)
{
	(*nplanes)++;
	p->fuel = RandomNumber(expectfuel);
	p->id = *nplanes;
	p->tm = curtime;
	switch(kind) {
	case ARRIVE:
		printf("      Plane %3d ready to land, ", *nplanes);
		printf("%d units of fuel.\n", p->fuel);
		break;
	case DEPART:
		printf("      Plane %3d ready to take off.\n", *nplanes);
		break;
	}
}
