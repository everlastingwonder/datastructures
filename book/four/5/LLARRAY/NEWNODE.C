 #include	"list.h"		 
 #include	"calls.h"	 
 /* NewNode: select the index of first available position.	*/ 
 int NewNode(int *avail, int *lastnode, int next[]) 
 { 
 	int n = -1; 
 	if (*avail != -1) { 
 		n = *avail; 
 		*avail = next[*avail]; 
 	} else if (*lastnode < MAX) { 
 		(*lastnode)++; 
 		n = *lastnode; 
 	} else  
 		Error("No available position left"); 
 	return n; 
 } 
