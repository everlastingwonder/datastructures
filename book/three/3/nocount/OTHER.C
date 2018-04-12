#include	"general.h"
#include	"queue.h"

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return !queue_ptr->full && 
		   ((queue_ptr->rear == queue_ptr->front - 1) ||
		   (queue_ptr->rear >= MAXQUEUE-1 && queue_ptr->front == 0));
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return queue_ptr->full;
}
