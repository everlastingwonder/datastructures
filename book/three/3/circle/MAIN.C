#include	"general.h"
#include	"queue.h"

/* test queue mechanism										*/
void main(void)
{
	int c;
	Queue_type queue;
	Queue_type *qp = &queue;

	Initialize(qp);
	printf("Queue is empty, it has %d items\n", Size(qp));
	printf("Enter lines of text and the program queues them.\n");
	printf("Use Ctrl-Z (EOF) to terminate the program.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		while ((c = getchar()) != '\n' && !Full(qp))
			AddQueue((Item_type) c, qp);
		if (c != '\n' && Full(qp))
			ungetc(c, stdin);
		printf("queue has %d items\n", Size(qp));
		while (!Empty(qp)) {
			DeleteQueue((Item_type *) &c, qp);
			printf("%c", c);
		}
		printf("\n");
	}
}
