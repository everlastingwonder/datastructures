#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* PopNode: pop node p from the linked stack				*/
void PopNode(Node_type **p, Stack_type *sp)
{
	if (sp->top == NULL)
		Error("Empty stack");
	else {
		*p = sp->top;
		sp->top = (*p)->next;
	}
}
