#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* KillTop: discard the top plynominal on the stack			*/
void KillTop(Stack_type *sp)
{
	Polynomial_type *p;

	if (Empty(sp))
		Error("Cannot discard top polynomial - stack empty");
	else {
		Pop(&p, sp);
		Erase(p);
	}
}
