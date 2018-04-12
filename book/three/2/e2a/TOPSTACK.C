#include	<limits.h>
#include	"general.h"
#include	"stack.h"
#include	"calls.h"

/* TopStack: return top element of the stack, or INT_MAX	*/
/*		   if the stack is empty; stack does not change		*/
Item_type TopStack(Stack_type *stack_ptr)
{
	Item_type item;

	if (Empty(stack_ptr))
		return INT_MAX;
	else {
		Pop(&item, stack_ptr);
		Push(item, stack_ptr);
		return item;
	}
}
