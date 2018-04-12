#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Multiply: multiply two polynomials and push the answer 	*/
void Multiply(Polynomial_type *p, Polynomial_type *q, Stack_type *sp)
{
	Polynomial_type *tmp;
	Polynomial_type *result = NULL;

	for ( ; p; p = p->next) {	/* mult. q by each term of p*/
		tmp = MonomialMultiply(q, p);
		Add(result, tmp, sp);
		Pop(&result, sp);
	}
/*\progbreak*/
	Push(result, sp);
	Erase(p);
	Erase(q);
}
