#include	"general.h"
#include	"queue.h"
#include	"calls.h"

/* main: test linked queue mechanism - one pointer	*/
void main(void)
{
	Item_type item;
	Queue_type queue;
	Queue_type *qp = &queue;

	Initialize(qp);
	DeleteNode(&item, qp);
	printf("DeleteNode - empty queue: %x\n", item);
	AddNode('a', qp);
	DeleteNode(&item, qp);
	printf("DeleteNode - expect 'a': %c\n", item);
	AddNode('b', qp);
	AddNode('c', qp);
	DeleteNode(&item, qp);
	printf("DeleteNode - expect 'b': %c\n", item);
	DeleteNode(&item, qp);
	printf("DeleteNode - expect 'c': %c\n", item);
	DeleteNode(&item, qp);
	printf("DeleteNode - empty queue: %x\n", item);
}
