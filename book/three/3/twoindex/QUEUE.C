#include	"general.h"
#include	"queue.h"

/* AddQueue: add item to the queue							*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
	if (Full(queue_ptr))
		Error("Queue is full");
	else { 
		if (queue_ptr->rear >= MAXQUEUE-1)
			Move(queue_ptr);
		queue_ptr->rear++;
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
		queue_ptr->front++;
	}
}

/* Move: move queue to the beginning of the array			*/
void Move(Queue_type *queue_ptr)
{
	int i;

	for (i = queue_ptr->front; i <= queue_ptr->rear; i++)
		queue_ptr->entry[i - queue_ptr->front] = 
										queue_ptr->entry[i];
	queue_ptr->rear -= queue_ptr->front;
	queue_ptr->front = 0;
}
