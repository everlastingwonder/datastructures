 #include	"general.h"		 
 #include	"node.h"	 
 #include	"calls.h" 
 /* InsertNode: insert node q after node {p.			*/ 
 void InsertNode(Node_type *p, Node_type *q) 
 { 
 	if (p == NULL || q == NULL) 
 		Error("At least one of nodes p and q is nonexistent"); 
 	else { 
 		q->next = p->next; 
 		p->next = q; 
 	} 
 } 
