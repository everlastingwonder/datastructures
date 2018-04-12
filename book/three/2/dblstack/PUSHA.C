 #include	"stack.h"	 
 /* PushA: push item onto the stack						*/ 
 void PushA(Item_type item, DoubleStack_type *stack_ptr) 
 { 
 	if (stack_ptr->topA > stack_ptr->topB) 
 		Error("Stack A is full"); 
 	else  
 		stack_ptr->entry[stack_ptr->topA++] = item; 
 } 
