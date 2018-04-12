 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h"		 
 /* PopNode: pop node from the linked stack.				*/ 
 void PopNode(Node_type **node_ptr, Stack_type *stack_ptr) 
 { 
 	if (stack_ptr->top == NULL) 
 		Error("Empty stack"); 
 	else { 
 		*node_ptr = stack_ptr->top; 
 		stack_ptr->top = (*node_ptr)->next; 
 	} 
 } 
