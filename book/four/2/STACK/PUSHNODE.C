 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h" 
 /* PushNode: push node onto the linked stack.				*/ 
 void PushNode(Node_type *node_ptr, Stack_type *stack_ptr) 
 { 
 	if (node_ptr == NULL) 
 		Error("Attempted to push a nonexistent node"); 
 	else { 
 		node_ptr->next = stack_ptr->top; 
 		stack_ptr->top = node_ptr; 
 	} 
 } 
