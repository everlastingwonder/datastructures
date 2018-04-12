#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Pop: pop a node from the stack and return its item 		*/
void Pop(Item_type *item, Stack_type *sp)
{
	Node_type *p;

	PopNode(&p, sp);
	*item = p->info;
	free(p);
}
