#include	"general.h"
#include	"stack.h"

/* Empty: returns non-zero if the stack is empty			*/
Boolean_type StackEmpty(Stack_type *stack_ptr)
{
	return stack_ptr->top <= 0;
}

/* Full: returns non-zero if the stack if full				*/
Boolean_type StackFull(Stack_type *stack_ptr)
{
	return stack_ptr->top >= MAXSTACK;
}
