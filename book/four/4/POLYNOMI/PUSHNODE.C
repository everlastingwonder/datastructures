 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h" 
 #include	"calls.h"		 
 /* PushNode: push node p onto the linked stack.			*/ 
 void PushNode(Node_type *p, Stack_type *sp) 
 { 
 	if (p == NULL) 
 		Error("Node is nonexistent"); 
 	else { 
 		p->next = sp->top; 
 		sp->top = p; 
 	} 
 } 
