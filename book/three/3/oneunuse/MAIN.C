#include	"general.h"
#include	"queue.h"

/* test queue mechanism										*/
void main(void)
{
	int c;
	Queue_type queue;
	Queue_type *qp = &queue;

	Initialize(qp);
	printf("Enter lines of text and the program queues them.\n");
	printf("Queue is full when rear is 2 positions away from front\n");
	printf("Queue is empty when rear is 1 position away from front\n");
	printf("Use Ctrl-Z (EOF) to terminate the program.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		while (!Full(qp) && (c = getchar()) != '\n') 
			AddQueue((Item_type) c, qp);
		while (!Empty(qp)) {
			DeleteQueue((Item_type *) &c, qp);
			printf("%c", c);
		}
		printf("\n");
	}
}
