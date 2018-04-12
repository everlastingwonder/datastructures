#include	"general.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* DeleteNode: delete a node from front of the queue 		*/
void DeleteNode(Item_type *item, Queue_type *queue_ptr)
{
	Node_type *node_ptr;

	if (queue_ptr->rear == NULL)
		Error("Queue is empty");
	else {
		node_ptr = queue_ptr->rear->next;
		*item = node_ptr->info;
		if (node_ptr == queue_ptr->rear) /* one node in the queue */
			queue_ptr->rear = NULL;
		else					         /* more than one node	  */
			queue_ptr->rear->next = node_ptr->next;
		free(node_ptr);
	}
}
