#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* DeleteQueue: delete a node from the queue and return it */
void DeleteQueue(Item_type *item, Queue_type *queue_ptr)
{
	Node_type *node_ptr;

	if (Empty(queue_ptr))
		Error("Queue is empty");
	else {
		DeleteNode(&node_ptr, queue_ptr);
		*item = node_ptr->info;
	}
}
