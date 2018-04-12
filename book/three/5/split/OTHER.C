#include	"general.h"
#include	"deque.h"

/* Empty: return non-zero if the stack is empty				*/
Boolean_type Empty(Stack_type *stack_ptr)
{
	return stack_ptr->top <= 0; 
}

/* Full: return non-zero if the stack if full				*/
Boolean_type Full(Stack_type *stack_ptr)
{
	return stack_ptr->top >= MAXSTACK;
}
