#include	"general.h"		/*\delete*/
#include	"deque.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* DeleteNodeTail: delete a node from the tail of the deque		*/
void DeleteNodeTail(Node_type **node_ptr, Deque_type *deque_ptr)
{
	if (deque_ptr->rear == NULL)
		Error("Deque is empty");
	else if (deque_ptr->rear == deque_ptr->rear->next) {
		*node_ptr = deque_ptr->rear;	/* a one node deque		*/
		deque_ptr->rear = NULL;
	} else {							/* more than one node	*/
		*node_ptr = deque_ptr->rear;
		for ( ; deque_ptr->rear->next != *node_ptr; 
						deque_ptr->rear = deque_ptr->rear->next)
			;
		deque_ptr->rear->next = (*node_ptr)->next;
	}
}
