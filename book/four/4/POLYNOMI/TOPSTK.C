 #include	<limits.h>		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"poly.h" 
 #include	"calls.h"		 
 /* TopStack: return top element of the stack, error message	*/ 
 /*		   if the stack is empty; stack does not change.		*/ 
 void TopStack(Item_type *item_ptr, Stack_type *sp) 
 { 
 	if (Empty(sp)) 
 		Error("TopStack: stack is empty"); 
 	else { 
 		Pop(item_ptr, sp); 
 		Push(*item_ptr, sp); 
 	} 
 } 
