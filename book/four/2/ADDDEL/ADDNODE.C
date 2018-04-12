#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* AddNode: add a node to the rear of the queue			*/
void AddNode(Node_type *node_ptr, Queue_type *queue_ptr)
{
	if (node_ptr == NULL)
		Error("Attempted to push a nonexistent node");
	else if (queue_ptr->front == NULL) {
		queue_ptr->front = node_ptr;
		queue_ptr->rear  = node_ptr;
	} else {
		queue_ptr->rear->next = node_ptr;
		queue_ptr->rear = node_ptr;
	}
}
