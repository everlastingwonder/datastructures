#include	"general.h"		/*\delete*/

/* Help: provide instructions for the user					*/
void Help(void)
{
	printf("Enter a string of commands in reverse Polish form.\n");
	printf("The valid instructions are:\n");
/*\progbreak*/
	printf(" ? Read a polynomial onto stack\n");
	printf(" + Add top two polynomials on stack\n");
/*\progbreak*/
	printf(" - Subtract top two polynomials on stack\n");
	printf(" * Multiply top two polynomials on stack\n");
/*\progbreak*/
	printf(" / Divide top two polynomials on stack\n");
	printf(" = Print polynomial on top of the stack\n");
}
