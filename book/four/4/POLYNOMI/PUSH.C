 #include	"node.h"		 
 #include	"stack.h"	 
 #include	"calls.h" 
 /* Push: make a new node with item and push it onto stack.	*/ 
 void Push(Item_type item, Stack_type *sp) 
 { 
 	PushNode(MakeNode(item), sp); 
 } 
