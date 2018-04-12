#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/

/* WritePolynomial: write a polynomial to standard output	*/
void WritePolynomial(Polynomial_type *p)
{
	if (!p)					/* polynomial is an empty list	*/
		printf("zero polynomial\n");
	else while (p) {
		printf("%5.2lfx^%1d", p->coef, p->exp);
		p = p->next;
		if (p)
			printf("+");
		else
			printf("\n");
	}
}
