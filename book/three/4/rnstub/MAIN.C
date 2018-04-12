#include	"general.h"
#include	"calls.h"

/* test RandomNumber stub function	*/
void main()
{
	int n;

	printf("Test RandomNumber stub.\n");
	printf("Enter a negative number to terminate the test.\n");
	do {
		n = RandomNumber((double) .123);
		printf("Received %d\n", n);
	} while (n > 0);
}
