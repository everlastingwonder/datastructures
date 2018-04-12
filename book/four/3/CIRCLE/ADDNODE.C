#include	"general.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* MakeNode: make a new node and insert item 				*/
Node_type *MakeNode(Item_type item)
{
	Node_type *p;

	if ((p = (Node_type *) malloc(sizeof(Node_type))) != NULL) {
		p->info = item;
		p->next = NULL;
	}
	return p;
}

/* AddNode: add a new node to the queue with item 			*/
void AddNode(Item_type item, Queue_type *queue_ptr)
{
	Node_type *p;

	if ((p = MakeNode(item)) == NULL)
		Error("Cannot allocate node");
	else if (queue_ptr->rear == NULL) {	/* queue is empty	*/
		queue_ptr->rear = p;
		queue_ptr->rear->next = queue_ptr->rear;
	} else {							/* queue not empty	*/
		p->next = queue_ptr->rear->next;
		queue_ptr->rear = queue_ptr->rear->next = p;
	}
}
