#include	<limits.h>
#include	"general.h"
#include	"stack.h"
#include	"calls.h"

/* test Delx function and delete 'b's from the stack	*/
void main()
{
	int i, stksize;
	Item_type c;
	Stack_type stack;
	Stack_type *stack_ptr = &stack;

	printf("Enter a line of text and the program "
		   "pushes it on the stack and delete 'b's.\n");
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		Initialize(stack_ptr);
		while ((c = getchar()) != '\n') 
			Push((Item_type) c, stack_ptr);
		Delx('b', stack_ptr);
		stksize = Size(stack_ptr);
		printf("stack has %d items\n", stksize);
		printf("stack from top to bottom: ");
		for (i = 0; i < stksize; i++) {
			Pop(&c, stack_ptr);
			putchar(c);
		}
		putchar('\n');
	}
}
