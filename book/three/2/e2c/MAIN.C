#include	<limits.h>
#include	"general.h"
#include	"stack.h"
#include	"calls.h"

/* test LastElem function; return INT_MAX if empty	*/
void main(void)
{
	int c;
	Stack_type stack;
	Stack_type *stack_ptr = &stack;

	printf("Enter a line of text and the program "
		   "pushes it on the stack.\n");
	printf("INT_MAX is %d\n", INT_MAX);
	while ((c = getchar()) != EOF) {
		ungetc(c, stdin);
		Initialize(stack_ptr);
		while ((c = getchar()) != '\n') 
			Push((Item_type) c, stack_ptr);
		c = LastElem(stack_ptr);
		printf("stack has %d items, LastElem is ", Size(stack_ptr));
		if (c == INT_MAX)
			printf("%d\n", c);
		else
			printf("%c\n", c);
	}
}
