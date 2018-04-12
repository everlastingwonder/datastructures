#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Add: add two polynomials and push the answer onto stack	*/
void Add(Polynomial_type *p, Polynomial_type *q, Stack_type *sp)
{
	double sum;
	Polynomial_type *ptmp = p;
	Polynomial_type *qtmp = q;
	Polynomial_type *result, *tail;

	tail = result = MakeTerm(0.0, 0);
	while(p && q) 
		if (p->exp == q->exp) {			/* add coeficients	*/
			if ((sum = p->coef + q->coef) != 0.0)
				tail = InsertTerm(sum, p->exp, tail);
			p = p->next;
			q = q->next;
/*\progbreak*/
		} else if (p->exp > q->exp) {	/* copy p to result	*/
			tail = InsertTerm(p->coef, p->exp, tail);
			p = p->next;
		} else {						/* copy q to result	*/
			tail = InsertTerm(q->coef, q->exp, tail);
			q = q->next;
		}
/*\progbreak*/
	/* One or both of the summands have been exhausted.		*/
	/* At most one of the following loops will be executed.	*/
	for ( ; p; p = p->next)
		tail = InsertTerm(p->coef, p->exp, tail);
	for ( ; q; q = q->next)
		tail = InsertTerm(q->coef, q->exp, tail);
/*\progbreak*/
	tail->next = NULL;					/* terminate polyn. */	
	Push(result->next, sp);
	free(result);						/* free dummy head	*/
	Erase(ptmp);						/* erase summand	*/
	Erase(qtmp);
}
