#include	<limits.h>
#include	"general.h"
#include	"stack.h"
#include	"calls.h"

/* test TopStack function; return MAXSTACK if empty	*/
void main()
{
	int item;
	Stack_type stack;
	Stack_type *stack_ptr = &stack;

	printf("Enter a line of text and the program "
		   "pushes it on the stack.\n");
	printf("MAXSTACK is %d\n", MAXSTACK);
	while ((item = getchar()) != EOF) {
		ungetc(item, stdin);
		Initialize(stack_ptr);
		while ((item = getchar()) != '\n') 
			Push(item, stack_ptr);
		item = TopStack(stack_ptr);
		printf("stack has %d items, TopStack is ", Size(stack_ptr));
		if (item == INT_MAX)
			printf("%d\n", item);
		else
			printf("%c\n", item);
	}
}
