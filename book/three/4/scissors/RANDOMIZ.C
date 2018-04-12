#include	<time.h>
#include	"general.h"

/* Randomize: set starting point for pseudo-random integers	*/
void Randomize(void)
{
	srand((unsigned int) (time(NULL) % 10000));
}
