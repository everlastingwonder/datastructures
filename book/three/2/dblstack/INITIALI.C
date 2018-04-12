 #include	"stack.h"	 
 /* Initialize: initialize the stack to be emtpy				*/ 
 void Initialize(DoubleStack_type *stack_ptr) 
 { 
 	stack_ptr->topA = 0; 
 	stack_ptr->topB = MAXSTACK-1; 
 } 
