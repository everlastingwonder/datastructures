 #include	"calls.h"		 
 extern char info[]; 
 /* InsertNode: insert information in a new node of the list.	*/ 
 void InsertNode(char c, int *head, int *avail, int *lastnode, int next[]) 
 { 
 	int i, n, lastn = -1; 
 	n = NewNode(avail, lastnode, next); 
 	info[n] = c; 
 	if (*head == -1) 
 		*head = n; 
 	else { 
 		for (i = *head; i != -1; i = next[i]) 
 			lastn = i; 
 		next[lastn] = n; 
 	} 
 	next[n] = -1; 
 } 
