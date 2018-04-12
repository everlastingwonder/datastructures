 #include	"stack.h"	 
 /* PopB: pop an Item from the stack							*/ 
 void PopB(Item_type *item, DoubleStack_type *stack_ptr) 
 { 
 	if (stack_ptr->topB >= MAXSTACK - 1) 
 		Error("Stack B is empty"); 
 	else 
 		*item = stack_ptr->entry[++stack_ptr->topB]; 
 } 
