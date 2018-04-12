#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Divide: divide two polynomials and push the answer 		*/
void Divide(Polynomial_type *p, Polynomial_type *q, Stack_type *sp)
{
	Polynomial_type *ptmp = p;
	Polynomial_type *result, *tail, *x;

	tail = result = MakeTerm(0.0, 0);
/*\progbreak*/
	while (p->exp <= q->exp) {
			tail = InsertTerm(q->coef / p->coef, q->exp - p->exp, tail);
			x = MonomialMultiply(p, tail);
			Subtract(x, q, sp);
			Pop(&q, sp);
			if (!q)
				break;
	}
/*\progbreak*/
	tail->next = NULL;					/* terminate polyn. */	
	Push(result->next, sp);
	free(result);						/* free dummy head	*/
	Erase(ptmp);
}
