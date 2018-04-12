 #include	"stack.h"	 
 void Error(char *);	/**/ 
 /* PopA: pop an Item from the stack							*/ 
 void PopA(Item_type *item_ptr, DoubleStack_type *stack_ptr) 
 { 
 	if (stack_ptr->topA <= 0) 
 		Error("Stack A is empty"); 
 	else 
 		*item_ptr = stack_ptr->entry[--stack_ptr->topA]; 
 } 
