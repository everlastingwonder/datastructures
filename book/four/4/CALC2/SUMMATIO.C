#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Summation: add all polynomials on the stack 				*/
void Summation(Stack_type *sp)
{
	Polynomial_type *p, *q;

	while(!Empty(sp)) {
		Pop(&p, sp);
		if (!Empty(sp)) {
			Pop(&q, sp);
			Add(p, q, sp);
		} else {
			Push(p, sp);
			break;
		}
	}
}
