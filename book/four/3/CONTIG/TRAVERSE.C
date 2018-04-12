 #include	"node.h"		 
 /* Traverse: traverse the list visiting one node at a time.	*/ 
 void Traverse(int head, int tail, Node_type list[],  
 			  void (*Visit)(Node_type *)) 
 { 
 	int p; 
 	for (p = head; p <= tail; p++) 
 		(*Visit)(&list[p]); 
 } 
