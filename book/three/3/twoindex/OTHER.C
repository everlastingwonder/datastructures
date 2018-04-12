#include	"general.h"
#include	"queue.h"

/* Size: return current number of items in the queue		*/
int Size(Queue_type *queue_ptr)
{
	return queue_ptr->rear - queue_ptr->front + 1;
}

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return queue_ptr->front > queue_ptr->rear; 
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return queue_ptr->front == 0 && 
		   queue_ptr->rear >= MAXQUEUE-1; 
}
