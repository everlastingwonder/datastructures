#include	"general.h"
#include	"queue.h"

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return (queue_ptr->rear + 1) % MAXQUEUE == queue_ptr->front;
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return (queue_ptr->rear + 2) % MAXQUEUE == queue_ptr->front;
}
