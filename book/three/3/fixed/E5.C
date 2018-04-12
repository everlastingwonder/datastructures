#include	"general.h"
#include	"queue.h"

/* AddQueue: add item to the queue							*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
	if (queue_ptr->rear >= MAXQUEUE)
		Error("Queue is full");
/*\progbreak*/
	else {
		queue_ptr->entry[queue_ptr->rear] = item;
		queue_ptr->rear++;
	}
}

/* DeleteQueue: delete and return Item in front of queue	*/
void DeleteQueue(Item_type *item, Queue_type *queue_ptr)
{
	int  i;

	if (queue_ptr->rear <= 0)
		Error("Queue is empty");
/*\progbreak*/
	else {
		*item = queue_ptr->entry[0];
		for (i = 1; i < queue_ptr->rear; i++)
			queue_ptr->entry[i-1] = queue_ptr->entry[i];
		queue_ptr->rear--;
	}
}
