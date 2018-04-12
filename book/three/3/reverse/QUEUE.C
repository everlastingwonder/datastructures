#include	"general.h"
#include	"stack.h"
#include	"queue.h"

/* AddQueue: add item to the queue							*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
	if (queue_ptr->count >= MAXQUEUE)
		Error("Queue is full");
	else {
		queue_ptr->count++;
		queue_ptr->rear = (queue_ptr->rear + 1) % MAXQUEUE;
		queue_ptr->entry[queue_ptr->rear] = item;
	}
}

/* DeleteQueue: delete and return an item in front of queue	*/
void DeleteQueue(Item_type *item, Queue_type *queue_ptr)
{
	if (queue_ptr->count <= 0)
		Error("Queue is empty");
	else {
		queue_ptr->count--;
		*item = queue_ptr->entry[queue_ptr->front];
		queue_ptr->front = (queue_ptr->front + 1) % MAXQUEUE;
	}
}

/* QueueSize: return current number of items in the queue	*/
int QueueSize(Queue_type *queue_ptr)
{
	return queue_ptr->count;
}

/* QueueEmpty: return non-zero if the queue is empty		*/
Boolean_type QueueEmpty(Queue_type *queue_ptr)
{
	return queue_ptr->count <= 0;
}

/* QueueFull: return non-zero if the queue if full			*/
Boolean_type QueueFull(Queue_type *queue_ptr)
{
	return queue_ptr->count >= MAXQUEUE;
}

/* QueueInitialize: initialize queue						*/
void QueueInitialize(Queue_type *queue_ptr)
{
	queue_ptr->count = 0;
	queue_ptr->front = 0;
	queue_ptr->rear  = -1;
}
