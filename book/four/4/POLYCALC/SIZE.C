#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/

/* Size: return the size of a linked stack					*/
int Size(Stack_type *sp)
{
	int n = 0;
	Node_type *p;

	for (p = sp->top; p; p = p->next)
		n++;
	return n;
}
