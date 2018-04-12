 
#include        "general.h"
#include        "simdefs.h"
#include        "calls.h"

 /* start: print messages and initialize the parameters.         */
void Start(int *endtime, double *expectarrive, double *expectdepart)
{
        Boolean_type ok;

        printf("This program simulates an airport with only one runway.\n");
        printf("One plane can land or depart in each unit of time.\n");
        printf("Up to %d planes can ", MAXQUEUE);
        printf("be waiting to land or take off at any time.\n");
        printf("How many units of time will the simulation run? ");
        scanf("%d", endtime);
 
        Randomize();    /* Initialize random number generation. */
        do {
                printf("Expected number of arrivals per unit time "
                           "(real number)? ");
                scanf("%lf", expectarrive);
                printf("Expected number of departures per unit time? ");
                scanf("%lf", expectdepart);
 
                if (*expectarrive < 0.0 || *expectdepart < 0.0) {
                        printf("These numbers must be nonnegative.\n");
                        ok = FALSE;
                } else if (*expectarrive + *expectdepart > 1.0) {
                        printf("The airport will become saturated. "
                                   "Read new numbers?\n");
                        ok = !Enquire(); /* If user says yes, repeat loop. */
                } else
                        ok = TRUE;
        } while (ok == FALSE);
}
