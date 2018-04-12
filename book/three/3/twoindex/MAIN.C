#include	"general.h"
#include	"queue.h"

/* test queue mechanism										*/
void main(void)
{
	int c, n;
	Queue_type queue;
	Queue_type *qp = &queue;

	Initialize(qp);
	printf("Queue is empty, it has %d items - MAX is %d\n", 
		Size(qp), MAXQUEUE);
	printf("Enter lines of text and the program queues them.\n");
	printf("Use Ctrl-Z (EOF) to terminate the program.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		Initialize(qp);
		while (!Full(qp) && (c = getchar()) != '\n')
			AddQueue((Item_type) c, qp);
		printf("How many items to delete? ");
		scanf("%d", &n);
		printf("queue has %d items - delete %d item(s)\n", 
			Size(qp), n);
		while (n--) {
			DeleteQueue((Item_type *) &c, qp);
			printf("item: %c\n", c);
		}
		printf("\n");
		printf("queue has %d items - add one item\n", 
			Size(qp));
		while ((c = getchar()) == '\n')
			;
		AddQueue((Item_type) c, qp);
		printf("queue has %d items - empty the queue\n", Size(qp));
		while (!Empty(qp)) {
			DeleteQueue((Item_type *) &c, qp);
			printf("item: %c\n", c);
		}
		printf("\nPlease enter the new string or EOF\n");
		while((c = getchar()) == '\n')
			;
		if (c == EOF)
			break;
		else
			ungetc(c, stdin);
	}
}
