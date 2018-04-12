#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* MakeNode: make a new node and insert item 		*/
Node_type *MakeNode(Item_type item)
{
	Node_type *p;

	if ((p = malloc(sizeof(Node_type))) != NULL) 
		p->info = item;
	return p;
}
