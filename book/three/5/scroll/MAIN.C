#include	"general.h"
#include	"scroll.h" 
#include	"calls.h"

/* test scroll mechanism for exercise E7, page 100	*/
void main(void)
{
	int c;
	Scroll_type scroll;
	Scroll_type *sp = &scroll;

	Initialize(sp);
	printf("Scroll is empty, it has %d items\n", Size(sp));
	printf("Enter lines of text and the program queues them.\n");
	printf("AddFront puts items in front of scroll\n");
	printf("DeleFront goes from front to rear (reverse order)\n");
	printf("Both AddFront and AddRear produce reverse order lists\n");
	printf("Use Ctrl-Z (EOF) to terminate the program.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		printf("Adding items to front of queue\n");
		while ((c = getchar()) != '\n' && !Full(sp))
			AddScroll(sp, (Item_type) c);
		if (c != '\n' && Full(sp))
			ungetc(c, stdin);
		printf("queue has %d items\n", Size(sp));
		PrScroll(sp, FRONT);
		printf("Adding items to rear of queue\n"); 
		while ((c = getchar()) != '\n' && !Full(sp))
			AddScroll(sp, (Item_type) c);
		if (c != '\n' && Full(sp))
			ungetc(c, stdin);
		printf("queue has %d items\n", Size(sp));
		PrScroll(sp, REAR);
	}
}
