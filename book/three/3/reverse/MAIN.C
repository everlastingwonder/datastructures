#include	"general.h"
#include	"stack.h"
#include	"queue.h"

void ReverseQueue(Queue_type *qp);

/* test ReverseQueue function for exercise e3c	*/
void main(void)
{
	int i;
	Queue_type q;
	Queue_type *qp = &q;

	printf("Put 2 items: ab in queue then reverse them\n");
	QueueInitialize(qp);
	for (i = 0; i < 2; i++)
		AddQueue((Item_type) ('a'+i), qp);
	ReverseQueue(qp);
	while (!QueueEmpty(qp)) {
		DeleteQueue(&i, qp);
		printf("%c", i);
	}
	printf("\nPut 3 items: abc in queue then reverse them\n");
	for (i = 0; i < 3; i++)
		AddQueue((Item_type) ('a'+i), qp);
	ReverseQueue(qp);
	while (!QueueEmpty(qp)) {
		DeleteQueue(&i, qp);
		printf("%c", i);
	}
	printf("\nPut 1 item: x in queue then reverse it\n");
	AddQueue('x', qp);
	ReverseQueue(qp);
	while (!QueueEmpty(qp)) {
		DeleteQueue(&i, qp);
		printf("%c", i);
	}
}
