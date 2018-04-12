#include	"general.h"
#include	"stack.h"
#include	"queue.h"

/* test QueueToStack function for exercise e3a	*/
void main(void)
{
	int i;
	Stack_type s;
	Stack_type *sp = &s;
	Queue_type q;
	Queue_type *qp = &q;

	printf("Put 5 items: abcde in queue then empty it into stack\n");
	StackInitialize(sp);
	QueueInitialize(qp);
	for (i = 0; i < 3; i++)
		AddQueue((Item_type) ('a'+i), qp);
	QueueToStack(sp, qp);
	printf("One copy of the queue on the stack:\n");
	while (!StackEmpty(sp)) {
		Pop(&i, sp);
		printf("%c", i);
	}
	for (i = 0; i < 3; i++)
		AddQueue((Item_type) ('a'+i), qp);
	QueueToStack(sp, qp);
	for (i = 0; i < 3; i++)
		AddQueue((Item_type) ('a'+i), qp);
	QueueToStack(sp, qp);
	printf("\nTwo copies of the queue on the stack:\n");
	while (!StackEmpty(sp)) {
		Pop(&i, sp);
		printf("%c", i);
	}
}
