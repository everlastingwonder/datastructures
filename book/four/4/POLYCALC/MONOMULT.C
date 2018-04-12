#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* MonomialMultiply: multiply a polynomial p by a monomial	*/
Polynomial_type *MonomialMultiply(Polynomial_type *p, Polynomial_type *q)
{
	Polynomial_type *result, *tail;

	tail = result = MakeTerm(0.0, 0);
	for ( ; p; p = p->next)
		tail = InsertTerm(p->coef * q->coef, p->exp + q->exp, tail);
	tail->next = NULL;					/* terminate polyn. */	
	tail = result->next;
	free(result);						/* free dummy head	*/
	return tail;
}
