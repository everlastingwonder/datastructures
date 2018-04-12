#include	"general.h"
#include	"calls.h"

/* driver for RandomNumber - test that average over the 	*/
/*				number of iterations is the expeted value	*/
void main(void)
{
	int i, limit;
	long total = 0.0;
	double evalue;

	printf("Input the expected value of random number:");
	scanf("%lf", &evalue);
	printf("How many trials for testing the random "
			"number generator? ");
	scanf("%d", &limit);
/*\progbreak*/
	Randomize();
	for (i = 1; i <= limit; i++)
		total += (long) RandomNumber(evalue);
	printf("The average number returned was %lf\n",
		(double) total / limit);
}
