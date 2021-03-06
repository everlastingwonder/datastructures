#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* DeleteNode: delete a node from the front of the queue	*/
void DeleteNode(Node_type **node_ptr, Queue_type *queue_ptr)
{
	if (queue_ptr->front == NULL)
		Error("Empty queue");
	else {
		*node_ptr = queue_ptr->front;
		queue_ptr->front = (*node_ptr)->next;
		if (queue_ptr->front == NULL)
			queue_ptr->rear = NULL;
	}
}
