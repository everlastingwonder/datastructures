#include	"general.h"
#include	"queue.h"

/* Project 1 - compare sides of string separated by :		*/
void main(void)
{
	Item_type c, d;
	Queue_type queue;
	Queue_type *queue_ptr = &queue;
	Boolean_type same = TRUE;

	Initialize(queue_ptr);
	printf("Type text to be processed: ");
	while ((c = getchar()) != '\n' && c != ':' && !Full(queue_ptr)) 
		AddQueue(c, queue_ptr);
	if (Full(queue_ptr))
		printf("Input too large for the implemented queue");
	else if (c == '\n')
		printf("N");			/* no semicolon on input	*/
	else {
		while ((c = getchar()) != '\n' && !Empty(queue_ptr)) {
			DeleteQueue(&d, queue_ptr);
			if (c != d)
				same = FALSE;
		}
		if (c == '\n')
			if (Empty(queue_ptr))
				if (same)
					printf("S");/* same length and equal	*/
				else
					printf("D");/* same length but different*/
			else
				printf("L");	/* left hand side longer	*/
		else
			printf("R");		/* right hand side longer	*/
		printf("\n");
	}
}
