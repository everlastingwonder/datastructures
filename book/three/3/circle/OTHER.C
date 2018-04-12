#include	"general.h"
#include	"queue.h"

/* Size: return current number of items in the queue		*/
int Size(Queue_type *queue_ptr)
{
	int i;
	int count = 1;

	if (queue_ptr->rear <= -1)
		return 0;
	for (i = queue_ptr->front; i != queue_ptr->rear; 
									i = (i + 1) % MAXQUEUE)
		count++;
	return count;
}

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return queue_ptr->rear <= -1; 
}

/* Full: return TRUE if the queue if full					*/
Boolean_type Full(Queue_type *queue_ptr)
{
	if ((queue_ptr->rear == queue_ptr->front - 1 && 
		 queue_ptr->rear > -1) ||
		(queue_ptr->rear == MAXQUEUE - 1 && 
		 queue_ptr->front == 0))
		return TRUE;
	else
		return FALSE;
}
