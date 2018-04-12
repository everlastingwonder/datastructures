#include	"general.h"
#include	"simdefs.h"
#include	"calls.h"

/* Conclude: write out statistics and conclude simulation	*/
void Conclude(int nplanes, int nland, int ntakeoff,
			  int nrefuse, int landwait, int takeoffwait,
			  int idletime, int endtime, int ncrashed,
			  Queue_type *pt, Queue_type *pl)
{
	printf("Simulation has concluded after %d units.\n", 
			endtime);
	printf("Total number of planes processed:    %3d\n",
			nplanes);
	printf("   Number of planes landed:          %3d\n",
			nland);
	printf("   Number of planes taken off:       %3d\n",
			ntakeoff);
	printf("   Number of planes crashed:         %3d\n",
			ncrashed);
	printf("   Number of planes refused use:     %3d\n",
			nrefuse);
	printf("   Number left ready to land:        %3d\n",
			Size(pl));
	printf("   Number left ready to take off:    %3d\n",
			Size(pt));
	if (endtime > 0)
		printf("   Percentage of time runway idle:  %6.2f\n",
				((double) idletime / endtime) * 100.0);
	if (nland > 0)
		printf("   Average wait time to land:       %6.2f\n",
				(double) landwait / nland);
	if (ntakeoff > 0)
		printf("   Average wait time to take off:   %6.2f\n",
				(double) takeoffwait / ntakeoff);
}
