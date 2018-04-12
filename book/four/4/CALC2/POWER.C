#include	<math.h>		/*\delete*/
#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/

/* Evaluate: evaluate the polynomial at the number rn		*/
double Evaluate(Polynomial_type *p, double rn)
{
	double total = 0.0;

	for ( ; p; p = p->next) 
		total += p->coef * pow(rn, (double) p->exp);
	return total;
}
