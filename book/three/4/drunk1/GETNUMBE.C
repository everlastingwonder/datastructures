#include	"general.h"

/* GetNumber: get a number between low and high, inclusive	*/
int GetNumber(int low, int high)
{
	int n;

	do {
		printf(": ");
		scanf("%d", &n);
	} while (!(n >= low && n <= high));
	return n;
}
