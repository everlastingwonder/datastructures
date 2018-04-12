#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* InsertTerm: insert a new term at the end of polynomial	*/
Polynomial_type *InsertTerm(double coef, int exp, 
							Polynomial_type *tail)
{
	if ((tail->next = MakeTerm(coef, exp)) == NULL) 
		Error("Cannot allocate polynomial term");
	return tail->next;
}
