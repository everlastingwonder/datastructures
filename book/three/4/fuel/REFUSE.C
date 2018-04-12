#include	"general.h"
#include	"simdefs.h"

/* Refuse: processes a plane when the queue is full			*/
void Refuse(Plane_type p, int *nrefuse, Action_type kind)
{
	switch(kind) {
	case ARRIVE:
		printf("      Plane %3d directed to another airport.\n", p.id);
		break;
	case DEPART:
		printf("      Plane %3d told to try later.\n", p.id);
		break;
	}
	(*nrefuse)++;
}
