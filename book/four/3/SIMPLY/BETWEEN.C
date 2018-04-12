 #include	"general.h"		 
 #include	"node.h"	 
 #include	"calls.h" 
 /* InsertBetween: insert q between the nodes r and {p.		*/ 
 void InsertBetween(Node_type *q, Node_type **head,  
 				   Node_type **r, Node_type *p) 
 { 
 	if (p == *head) { 
 		q->next = p; 
 		*r = *head = q;		/* q is at the head of the list.	*/ 
 	} else { 
 		q->next = p; 
 		(*r)->next = q;		/* q is after r and before {p. */ 
 		*r = q; 
 	} 
 } 
