#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *queue_ptr)
{
	return queue_ptr->front == NULL && queue_ptr->rear == NULL;
}

/* Full: always return FALSE because it is a linked queue	*/
Boolean_type Full(Queue_type *queue_ptr)
{
	return FALSE;
}
