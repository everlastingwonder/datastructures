#include	<limits.h>		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* TopStack: return top element of the stack, error message	*/
/*		   if the stack is empty; stack does not change		*/
void TopStack(Item_type *item, Stack_type *sp)
{
	if (Empty(sp))
		Error("TopStack: stack is empty");
	else {
		Pop(item, sp);
		Push(*item, sp);
	}
}
