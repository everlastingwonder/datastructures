#include	"general.h"
#include	"deque.h" 
#include	"calls.h"

/* test queue mechanism	for exercise E4, page 100	*/
void main(void)
{
	int c;
	Deque_type deque;
	Deque_type *qp = &deque;

	Initialize(qp);
	printf("Deque is empty, it has %d items\n", Size(qp));
	printf("Enter lines of text and the program queues them.\n");
	printf("AddFront puts items in front of deque\n");
	printf("DeleFront goes from front to rear (reverse order)\n");
	printf("Both AddFront and AddRear produce reverse order lists\n");
	printf("Use Ctrl-Z (EOF) to terminate the program.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		printf("Adding items to front of queue\n");
		while (!Full(qp) && (c = getchar()) != '\n') 
			AddFront(qp, (Item_type) c);
		if (c != '\n' && Full(qp))
			ungetc(c, stdin);
		printf("queue has %d items\n", Size(qp));
		PrDeque(qp, FRONT);
		printf("Adding items to rear of queue\n"); 
		while ((c = getchar()) != '\n' && !Full(qp))
			AddRear(qp, (Item_type) c);
		if (c != '\n' && Full(qp))
			ungetc(c, stdin);
		printf("queue has %d items\n", Size(qp));
		PrDeque(qp, REAR);
	}
}
