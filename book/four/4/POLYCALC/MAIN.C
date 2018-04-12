#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

#define		MAXCOMMAND		10

/* implement calculator for polynomials			*/
void main(void)
{
	int i, n;
	Stack_type stack;
	char command[MAXCOMMAND];

	Initialize(&stack);
	do {
		n = ReadCommand(command, &stack);
		for (i = 0; i < n; i++)
			DoCommand(command[i], &stack);
	} while (Enquire());
}
