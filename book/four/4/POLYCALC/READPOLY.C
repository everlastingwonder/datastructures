#include	<limits.h>		/*\delete*/
#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* ReadPolynomial: read a polynomial and return its pointer	*/
Polynomial_type *ReadPolynomial()
{
	double coef;
	int exp, lastexp;
	Polynomial_type *result, *tail;

	printf("Enter coefficients and exponents for the "
		   "polynomial.\nExponents must be in descending "
		   "order.\nEnter coefficient or exponent 0 to "
		   "terminate.\n");
/*\progbreak*/
	lastexp = INT_MAX;
	tail = result = MakeTerm(0.0, 0);	/* dummy head		*/
/*\progbreak*/
	while(1) {
		printf("coefficient? ");
		scanf("%lf", &coef);
		if (coef == 0.0)
			break;
		printf("exponent? ");
		scanf("%d", &exp);
/*\progbreak*/
		if (exp >= lastexp || exp < 0) {
			printf("Bad exponent. Polynomial is terminated "
				   "without its last term.\n");
			break;
		} 
/*\progbreak*/
		tail = InsertTerm(coef, exp, tail);
		if (exp == 0)
			break;
		lastexp = exp;
	}	
/*\progbreak*/
	tail->next = NULL;			/* terminate the polynomial	*/
	tail = result;				/* prepare to dispose head	*/
	result = result->next;		/* advance to first term	*/
	free(tail);					/* free dummy head			*/
	return result;
}
