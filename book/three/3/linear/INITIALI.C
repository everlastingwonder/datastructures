#include	"general.h"
#include	"queue.h"

/* Initialize: initialize queue								*/
void Initialize(Queue_type *queue_ptr)
{
	queue_ptr->count = 0;
	queue_ptr->front = 0;
	queue_ptr->rear  = -1;
}
