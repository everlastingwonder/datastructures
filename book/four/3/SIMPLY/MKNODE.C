 #include	"general.h"		 
 #include	"node.h"	 
 /* MakeNode: make a new node and insert item. 				*/ 
 Node_type *MakeNode(Item_type item) 
 { 
 	Node_type *p; 
 	if ((p = malloc(sizeof(Node_type))) == NULL)  
 		Error("Exhausted memory."); 
 	else { 
 		p->info = item; 
 		p->next = NULL; 
 	} 
 	return p; 
 } 
