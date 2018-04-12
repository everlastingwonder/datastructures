#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/

/* MakeTerm: make a new term and insert coef and exp		*/
Polynomial_type *MakeTerm(double coef, int exp)
{
	Polynomial_type *p;

	if ((p = malloc(sizeof(Polynomial_type))) != NULL) {
		p->coef = coef;
		p->exp  = exp;
	}
	return p;
}
