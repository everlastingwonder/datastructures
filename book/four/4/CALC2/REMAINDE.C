#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* DivideWithRemainder: divide and produce remainder		*/
void DivideWithRemainder(Polynomial_type *p, Polynomial_type *q, 
						 Stack_type *sp)
{
	Polynomial_type *quot, *rem;

	Divide(p, q, sp);
	Pop(&quot, sp);
	printf("quotient: ");
	WritePolynomial(quot);
/*\progbreak*/
	Multiply(p, quot, sp);
	Pop(&p, sp);
	printf("new p: ");
	WritePolynomial(p);
/*\progbreak*/
	Subtract(p, q, sp);
	printf("remainder: ");
	Pop(&p, sp);
	WritePolynomial(p);
}
