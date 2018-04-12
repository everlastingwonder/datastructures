#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* Push: push item onto the stack							*/
void Push(Stack_type *stack_ptr, Item_type item)
{
	if (stack_ptr->top >= MAXSTACK)
		Error("Stack is full");
	else 
		stack_ptr->entry[stack_ptr->top++] = item;
}

/* Pop: pop an item from the stack							*/
void Pop(Stack_type *stack_ptr, Item_type *item)
{
	if (stack_ptr->top <= 0)
		Error("Stack is empty");
	else
		*item = stack_ptr->entry[--stack_ptr->top];
}
