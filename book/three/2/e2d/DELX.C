#include	<limits.h>
#include	"general.h"
#include	"stack.h"

/* Delx: delete all occurrences of x from the stack			*/
void Delx(Item_type x, Stack_type *stack_ptr)
{
	int i;
	Item_type item;
	int stksize = Size(stack_ptr);
	Stack_type local_stack;
	Stack_type *local_ptr = &local_stack;

	if (stksize > 0) {
		Initialize(local_ptr);
		for (i = 0; i < stksize; i++) {
			Pop(&item, stack_ptr);
			if (item != x)
				Push(item, local_ptr);
		}
/*\progbreak*/
		stksize = Size(local_ptr);
		for (i = 0; i < stksize; i++) {
			Pop(&item, local_ptr);
			Push(item, stack_ptr);
		}
	}
}
