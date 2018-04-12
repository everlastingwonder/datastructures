#include	"general.h"

/* RandomNumber: stub for testing purposes					*/
int RandomNumber(double expectedvalue)
{
	int n;				/* test value to read and return	*/

	printf("RandomNumber called with expected value of %lf\n",
			expectedvalue);
	printf("Input test value to be returned: ");
	scanf("%d", &n);
	return n;
}
