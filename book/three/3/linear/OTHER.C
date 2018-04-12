#include	"general.h"
#include	"queue.h"

/* Size: return current number of items in the queue		*/
int Size(Queue_type *qp)
{
	return qp->count;
}

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Queue_type *qp)
{
	return qp->count <= 0;
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Queue_type *qp)
{
	return qp->count >= MAXQUEUE;
}

/* Service: service an item after it is removed from queue	*/
void Service(Item_type x)
{
	printf("service - %c\n", x);
}
