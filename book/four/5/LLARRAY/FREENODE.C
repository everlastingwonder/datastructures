 #include	"list.h"		 
 #include	"calls.h"	 
 /* FreeNode: return node at position n to available space.	*/ 
 void FreeNode(int *head, int *avail, int next[], int n) 
 { 
 	int i; 
 	if (n <= -1) 
 		Error("Invalid node to return to available space"); 
 	else { 
 		if (*head == n)  
 			*head = next[*head]; 
 		else 
 			for (i = *head; i < MAX; i++) { 
 				if (next[i] == n) { 
 					next[i] = next[n]; 
 					break; 
 				} 
 			} 
 		next[n] = *avail; 
 		*avail = n; 
 	} 
 } 
