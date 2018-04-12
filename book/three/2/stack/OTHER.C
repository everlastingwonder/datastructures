 #include	"general.h"		 
 #include	"stack.h"	 
 /* Empty: returns non-zero if the stack is empty.			*/ 
 Boolean_type Empty(Stack_type *stack_ptr) 
 { 
 	return stack_ptr->top <= 0; 
 } 
 /* Full: returns non-zero if the stack is full.				*/ 
 Boolean_type Full(Stack_type *stack_ptr) 
 { 
 	return stack_ptr->top >= MAXSTACK; 
 } 
