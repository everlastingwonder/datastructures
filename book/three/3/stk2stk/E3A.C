#include	"general.h"
#include	"stack.h"

/* EmptyStack: empty stack one stack onto another			*/
void EmptyStack(Stack_type *t_ptr, Stack_type *s_ptr)
{
	Item_type item;

	while (!StackEmpty(s_ptr) && !StackFull(t_ptr))	{
		Pop(&item, s_ptr);
		Push(item, t_ptr);
	}
}
