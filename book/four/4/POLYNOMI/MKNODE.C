 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h"		 
 /* MakeNode: make a new node and insert item. 		*/ 
 Node_type *MakeNode(Item_type item) 
 { 
 	Node_type *p; 
 	if ((p = malloc(sizeof(Node_type))) != NULL)  
 		p->info = item; 
 	return p; 
 } 
