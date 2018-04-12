#include	"general.h"
#include	"stack.h"

/* Push: push item onto the stack							*/
void Push(Item_type item, Stack_type *stack_ptr)
{
	if (stack_ptr->top >= MAXSTACK)
		Error("Stack is full");
	else 
		stack_ptr->entry[stack_ptr->top++] = item;
}

/* Pop: pop an Item from the stack							*/
void Pop(Item_type *item_ptr, Stack_type *stack_ptr)
{
	if (stack_ptr->top <= 0)
		Error("Stack is empty");
	else
		*item_ptr = stack_ptr->entry[--stack_ptr->top];
}
