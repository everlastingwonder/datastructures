#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Derivative: compute the derivative of a polynomial		*/
Polynomial_type *Derivative(Polynomial_type *p)
{
	Polynomial_type *result, *tail;

	tail = result = MakeTerm(0.0, 0);
	for ( ; p; p = p->next) 
		if (p->exp)
			tail = InsertTerm(p->coef * p->exp, p->exp - 1, tail);
	tail->next = NULL;
	tail = result->next;
	free(result);
	return tail;
}
