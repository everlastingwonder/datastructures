#include	"general.h"
#include	"simdefs.h"
#include	"calls.h"

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

/* DeleteQueue: delete and return item in front of queue	*/
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

/* Initialize: initialize queue								*/
void Initialize(Queue_type *queue_ptr)
{
	queue_ptr->count = 0;
	queue_ptr->front = 0;
	queue_ptr->rear  = -1;
}

/* Size: return current number of items in the queue		*/
int Size(Queue_type *queue_ptr)
{
	return queue_ptr->count;
}

/* empty: TRUE if the queue is empty, otherwise FALSE		*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return queue_ptr->count <= 0; 
}

/* Full: TRUE if the queue if full, otherwise FALSE			*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return queue_ptr->count >= MAXQUEUE; 
}

/* Error: print error message and terminate the program		*/
void Error(char *s)
{
	fprintf(stderr, "%s\n", s);
	exit(1);
}
