 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h" 
 /* Pop: pop a node from the stack and return its item. 		*/ 
 void Pop(Item_type *item, Stack_type *stack_ptr) 
 { 
 	Node_type *node_ptr; 
 	PopNode(&node_ptr, stack_ptr); 
 	*item = node_ptr->info; 
 	free(node_ptr); 
 } 
