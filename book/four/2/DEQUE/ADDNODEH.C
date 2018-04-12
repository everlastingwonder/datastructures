#include	"general.h"		/*\delete*/
#include	"deque.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* AddNodeHead: add a new node to the front of the deque	*/
void AddNodeHead(Item_type item, Deque_type *deque_ptr)
{
	Node_type *node_ptr;

	if ((node_ptr = MakeNode(item)) == NULL)
		Error("Cannot allocate node");
	else if (deque_ptr->rear == NULL) {	/* deque is empty	*/
		deque_ptr->rear = node_ptr;
		deque_ptr->rear->next = deque_ptr->rear;
	} else {							/* deque not empty	*/
		node_ptr->next = deque_ptr->rear->next;
		deque_ptr->rear->next = node_ptr;
	}
}
