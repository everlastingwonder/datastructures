#include	"general.h"
#include	"queue.h"

/* AddQueue: add item to the queue							*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
	if (Full(queue_ptr))
		Error("Queue is full");
	else {
		queue_ptr->rear = (queue_ptr->rear + 1) % MAXQUEUE;
		queue_ptr->entry[queue_ptr->rear] = item;
	}
}

/* DeleteQueue: delete and return item in front of queue	*/
void DeleteQueue(Item_type *item, Queue_type *queue_ptr)
{
	if (Empty(queue_ptr))
		Error("Queue is empty");
	else {
		*item = queue_ptr->entry[queue_ptr->front];
		queue_ptr->front = (queue_ptr->front + 1) % MAXQUEUE;
	}
}
