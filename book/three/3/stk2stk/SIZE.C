#include	"general.h"
#include	"stack.h"

/* Size: return the current size of the stack				*/
int Size(Stack_type *stack_ptr)
{
	return stack_ptr->top;
}
