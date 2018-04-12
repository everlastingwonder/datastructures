#include	"general.h"		/*\delete*/

/* Help: provide instructions for the user					*/
void Help(void)
{
	printf("Enter a string of commands in reverse Polish form.\n");
/*\progbreak*/
	printf("The valid instructions are:\n");
	printf(" ? Read a polynomial onto stack\n");
/*\progbreak*/
	printf(" + Add top two polynomials on stack\n");
	printf(" - Subtract top two polynomials on stack\n");
/*\progbreak*/
	printf(" * Multiply top two polynomials on stack\n");
	printf(" / Divide top two polynomials on stack\n");
/*\progbreak*/
	printf(" = Print polynomial on top of the stack\n");
	printf(" a add all the polynomials on the stack\n");
/*\progbreak*/
	printf(" c clear a polynomial at memory[location]\n");
	printf(" d find derivative and return a pointer to derivative\n");
/*\progbreak*/
	printf(" e evaluate a polynomial at some number\n");
	printf(" i interchange the top two polynomials on the stack\n");
/*\progbreak*/
	printf(" k kill top polynomial on the stack\n");
	printf(" r recall a polynomial from memory[location]\n");
	printf(" s store top polynomial at memory[location]\n");
}
