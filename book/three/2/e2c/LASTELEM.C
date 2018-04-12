#include	<limits.h>
#include	"general.h"
#include	"stack.h"

/* LastElem: return last element from the stack,			*/
/*			 or INT_MAX if the stack is empty				*/
Item_type LastElem(Stack_type *stack_ptr)
{
	int i;
	Item_type item, tmp;
	int stksize = Size(stack_ptr);
	Stack_type local_stack;
	Stack_type *local_ptr = &local_stack;

	if (stksize <= 0)
		return INT_MAX;
	else {
		Initialize(local_ptr);
		for (i = 0; i < stksize; i++) {
			Pop(&item, stack_ptr);
			Push(item, local_ptr);
		}
		Pop(&item, local_ptr);
		Push(item, local_ptr);
		for (i = 0; i < stksize; i++) {
			Pop(&tmp, local_ptr);
			Push(tmp, stack_ptr);
		}
		return item;
	}
}
