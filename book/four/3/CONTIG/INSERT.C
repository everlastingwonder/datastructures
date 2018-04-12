 #include	"general.h"		 
 #include	"node.h"	 
 #include	"calls.h" 
 /* InsertNode: insert item at the end of the list.			*/ 
 int InsertNode(Item_type item, int tail, Node_type list[]) 
 { 
 	if (tail + 1 >= MAXLIST) 
 		Error("List is full"); 
 	else 
 		list[++tail].info = item; 
 	return tail; 
 } 
