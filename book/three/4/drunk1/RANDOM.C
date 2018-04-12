#include	<limits.h>
#include	<math.h>
#include	"general.h"

/* RandomNumber: generate a pseudo-random integer according	*/
/*				 to Poisson distribution					*/
int RandomNumber(double expectedvalue)
{
	int n = 0;			/* counter of iterations			*/
	double em;			/* e to the power expectedvalue		*/
	double x;			/* pseudo-random number, 0 < x < 1	*/

	em = exp(-expectedvalue);
	x = rand() / (double) INT_MAX;
	while (x > em) {
		n++;
		x *= rand() / (double) INT_MAX;
	}
	return n;
}
