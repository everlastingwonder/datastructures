#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Initialize: initialize the queue to be empty				*/
void Initialize(Queue_type *queue_ptr)
{
	queue_ptr->front = queue_ptr->rear = NULL;
}
