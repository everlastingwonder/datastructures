 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 /* Start: position the window at the first entry of list.	*/ 
 void Start(List_type *list_ptr, int *w) 
 { 
 	if (Empty(list_ptr)) 
 		*w = -1; 
 	else 
 		*w = 0; 
 } 
 /* Finish: position window to last entry of the list.		*/ 
 void Finish(List_type *list_ptr, int *w) 
 { 
 	*w = list_ptr->count - 1; 
 } 
