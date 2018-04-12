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

/* Error: print error message and terminate the program		*/
void Error(char *s)
{
	fprintf(stderr, "%s\n", s);
	exit(1);
}

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

/* StackInitialize: initialize the stack to be emtpy		*/
void StackInitialize(Stack_type *stack_ptr)
{
	stack_ptr->top = 0;
}

/* StackSize: return the current size of the stack			*/
int StackSize(Stack_type *stack_ptr)
{
	return stack_ptr->top;
}
