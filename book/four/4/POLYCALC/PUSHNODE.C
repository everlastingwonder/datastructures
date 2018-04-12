#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* PushNode: push node p onto the linked stack				*/
void PushNode(Node_type *p, Stack_type *sp)
{
	if (p == NULL)
		Error("Node is nonexistent");
	else {
		p->next = sp->top;
		sp->top = p;
	}
}
