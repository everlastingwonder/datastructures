#include	"general.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* MakeNode: make a new node and insert item 				*/
Node_type *MakeNode(Item_type item)
{
	Node_type *node_ptr;

	if ((node_ptr = (Node_type *) malloc(sizeof(Node_type))) != NULL) {
		node_ptr->info = item;
		node_ptr->next = NULL;
	}
	return node_ptr;
}

/* AddNode: add a new node to the queue with item 			*/
void AddNode(Item_type item, Queue_type *queue_ptr)
{
	Node_type *node_ptr;

	if ((node_ptr = MakeNode(item)) == NULL)
		Error("Cannot allocate node");
	else if (queue_ptr->rear == NULL) {	/* queue is empty	*/
		queue_ptr->rear = node_ptr;
		queue_ptr->rear->next = queue_ptr->rear;
	} else {							/* queue not empty	*/
		node_ptr->next = queue_ptr->rear->next;
		queue_ptr->rear = queue_ptr->rear->next = node_ptr;
	}
}
