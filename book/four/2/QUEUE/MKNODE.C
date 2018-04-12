 #include	"general.h"		 
 #include	"node.h"	 
 /* Makenode: make a new node and insert item. 		*/ 
 Node_type *Makenode(Item_type item) 
 { 
 	Node_type *node_ptr; 
 	if ((node_ptr = malloc(sizeof(Node_type))) == NULL)  
 		Error("Exhausted memory."); 
 	else { 
 		node_ptr->info = item; 
 		node_ptr->next = NULL; 
 	} 
 	return node_ptr; 
 } 
