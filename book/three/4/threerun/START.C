#include	"general.h"
#include	"simdefs.h"
#include	"calls.h"

/* start: print messages and initialize the parameters		*/
void Start(int *endtime, int *nplanes, int *nland,
		   int *ntakeoff, int *nrefuse, int *landwait,
		   int *takeoffwait, int *idletime, 
		   double *expectarrive, double *expectdepart)
{
	Boolean_type ok;

	*nplanes = *nland = *ntakeoff = *nrefuse = 0;
	*landwait = *takeoffwait = *idletime = 0;
	printf("This program simulates an airport with three ");
	printf("runways.\nOne plane can land or depart in each ");
	printf("unit of time.\nUp to %d planes can ", MAXQUEUE);
	printf("be waiting to land or take off at any time.\n");
	printf("How many units of time will the simulation run?\n");
	scanf("%d", endtime);
	Randomize();	/* initialize random number generation	*/
	do {
		printf("Expected number of arrivals per unit time "
			   "(real number)?\n");
		scanf("%lf", expectarrive);
		printf("Expected number of departures per unit "
			   "time?\n");
		scanf("%lf", expectdepart);
		if (*expectarrive < 0.0 || *expectdepart < 0.0) {
			printf("These numbers must be nonnegative.\n");
			ok = FALSE;
		} else if (*expectarrive + *expectdepart > 3.0 ||
				   *expectarrive > 2.0 || *expectdepart > 2.0) {
			printf("The airport will become saturated. "
				   "Read new numbers?\n");
			ok = !Enquire();	/* FALSE if Y or y		*/
		} else
			ok = TRUE;
	} while (ok == FALSE);
}
