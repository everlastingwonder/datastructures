 #include	"node.h"		 
 /* Traverse: traverse the list visiting one node at a time.	*/ 
 void Traverse(Node_type *head, void (*Visit)(Node_type *)) 
 { 
 	Node_type *p; 
 	for (p = head; p; p = p->next) 
 		(*Visit)(p); 
 } 
