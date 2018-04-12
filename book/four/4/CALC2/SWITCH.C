#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Switch: interchange the top two polynomials on the stack	*/
void Switch(Stack_type *sp)
{
	Polynomial_type *p, *q;

	if (Empty(sp))
		Error("Cannot switch polynomials - stack empty");
/*\progbreak*/
	else {
		Pop(&p, sp);
		if (Empty(sp)) {
			printf("Only one polynomial on the stack\n");
			Push(p, sp);
/*\progbreak*/
		} else {
			Pop(&q, sp);
			Push(p, sp);
			Push(q, sp);
		}
	}
}
