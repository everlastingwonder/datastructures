#include	"general.h"
#include	"queue.h"

/* Size: return current number of items in the queue		*/
int Size(Queue_type *queue_ptr)
{
	return queue_ptr->rear;
}

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return queue_ptr->rear <= 0; 
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return queue_ptr->rear >= MAXQUEUE;
}
