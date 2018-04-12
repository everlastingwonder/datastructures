#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Push: make a new node with item and push it onto stack	*/
void Push(Item_type item, Stack_type *sp)
{
	PushNode(MakeNode(item), sp);
}
