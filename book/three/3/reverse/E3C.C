#include	"general.h"
#include	"stack.h"
#include	"queue.h"

/* ReverseQueue: use a local stack to reverse item in queue	*/
void ReverseQueue(Queue_type *queue_ptr)
{
	Item_type  item;
	Stack_type stack;
	Stack_type *stack_ptr = &stack;

	StackInitialize(stack_ptr);
	while (!QueueEmpty(queue_ptr) && !StackFull(stack_ptr)) {
		DeleteQueue(&item, queue_ptr);
		Push(item, stack_ptr);
	}
/*\progbreak*/
	while (!StackEmpty(stack_ptr)) {
		Pop(&item, stack_ptr);
		AddQueue(item, queue_ptr);
	}
}
