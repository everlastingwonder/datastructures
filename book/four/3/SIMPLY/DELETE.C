 #include	"general.h"		 
 #include	"node.h"	 
 #include	"calls.h"	 
 /* Delete: delete node p from the list; r is in front of {p.	*/ 
 void Delete(Node_type *r, Node_type *p) 
 { 
 	if (r == NULL || p == NULL) 
 		Error("At least one of nodes r and p is nonexistent"); 
 	else if (r->next != p) 
 		Error("Nodes r and p not in sequence"); 
 	else  
 		r->next = p->next; 
 } 
