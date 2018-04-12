#include	"general.h"
#include	"stack.h"
#include	"queue.h"

/* QueueToStack: empties queue into stack 					*/
void QueueToStack(Stack_type *stack_ptr, 
				  Queue_type *queue_ptr)
{
	Item_type item;

	while (!QueueEmpty(queue_ptr) && !StackFull(stack_ptr)) {
		DeleteQueue(&item, queue_ptr);
		Push(item, stack_ptr);
	}
}
