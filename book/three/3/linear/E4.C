#include	"general.h"
#include	"queue.h"

/* AddQueue: add item to the queue							*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
/*\progbreak*/
	if (queue_ptr->count >= MAXQUEUE)
		EmptyQueue(queue_ptr);
/*\progbreak*/
	else {
		queue_ptr->count++;
		queue_ptr->rear = (queue_ptr->rear + 1) % MAXQUEUE;
		queue_ptr->entry[queue_ptr->rear] = item;
	}
}

/* DeleteQueue: delete and return item in front of queue	*/
void DeleteQueue(Item_type *item_ptr, Queue_type *queue_ptr)
{
/*\progbreak*/
	if (queue_ptr->count <= 0)
		Error("Queue is empty");
/*\progbreak*/
	else {
		queue_ptr->count--;
		*item_ptr = queue_ptr->entry[queue_ptr->front];
		queue_ptr->front = (queue_ptr->front + 1) % MAXQUEUE;
	}
}

/* EmptyQueue: empty the queue and service each item		*/
void EmptyQueue(Queue_type *queue_ptr)
{
	Item_type item;

	while (!Empty(queue_ptr)) {
		DeleteQueue(&item, queue_ptr);
		Service(item);
	}
}
