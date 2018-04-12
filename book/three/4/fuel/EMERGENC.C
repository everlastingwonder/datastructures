#include	"general.h"
#include	"simdefs.h"

/* EmergencyLand: called for a plane created with fuel 		*/
/*				  level lower than size of landing queue	*/
void EmergencyLand(Plane_type p, int curtime, 
				   int *nland, int *ncrashed)
{
	int wait;

	wait = curtime - p.tm;
	if (p.fuel < wait) {
		printf("      Plane %3d ran out of fuel and crashed.\n",
				p.id);
		(*ncrashed)++;
	} else {
		printf("      Plane %3d makes emergency landing.\n");
		(*nland)++;
	}
}
