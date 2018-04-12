 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h"		 
 /* Pop: pop a node from the stack and return its item. 		*/ 
 void Pop(Item_type *item, Stack_type *sp) 
 { 
 	Node_type *p; 
 	PopNode(&p, sp); 
 	*item = p->info; 
 	free(p); 
 } 
