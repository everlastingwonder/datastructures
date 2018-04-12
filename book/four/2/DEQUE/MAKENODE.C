#include	"general.h"		/*\delete*/
#include	"deque.h"		/*\delete*/

/* MakeNode: make a new node and insert item 			*/
Node_type *MakeNode(Item_type item)
{
	Node_type *node_ptr;

	if ((node_ptr = (Node_type *) malloc(sizeof(Node_type))) != NULL) {
		node_ptr->info = item;
		node_ptr->next = NULL;
	}
	return node_ptr;
}
