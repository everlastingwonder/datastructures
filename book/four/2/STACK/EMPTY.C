 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 /* Empty: return non-zero if the stack is empty.				*/ 
 Boolean_type Empty(Stack_type *stack_ptr) 
 { 
 	return stack_ptr->top == NULL; 
 } 
 /* Full: always return FALSE because it is a linked stack.	*/ 
 Boolean_type Full(Stack_type *stack_ptr) 
 { 
 	return FALSE; 
 } 
