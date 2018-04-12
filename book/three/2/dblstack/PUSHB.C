 #include	"stack.h"	 
 /* PushB: push item onto the stack						*/ 
 void PushB(Item_type item, DoubleStack_type *stack_ptr) 
 { 
 	if (stack_ptr->topA > stack_ptr->topB) 
 		Error("Stack B is full"); 
 	else  
 		stack_ptr->entry[stack_ptr->topB--] = item; 
 } 
