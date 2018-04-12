 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 /* Islast: non-zero if w is the last entry of the list.		*/ 
 Boolean_type IsLast(List_type *list_ptr, int *w) 
 { 
 	int i; 
 	for (i = *w + 1; i < MAXLIST; i++) 
 		if (list_ptr->entry[i]) 
 			break; 
 	if (i >= MAXLIST) 
 		return TRUE; 
 	else 
 		return FALSE; 
 } 
 /* Start: position the window at the first entry of list.	*/ 
 void Start(List_type *list_ptr, int *w) 
 { 
 	int i; 
 	for (i = 0; i < MAXLIST; i++) 
 		if (list_ptr->entry[i]) 
 			break; 
 	*w = i; 
 } 
 /* Next: position the window at the next entry of list.		*/ 
 void Next(List_type *list_ptr, int *w) 
 { 
 	int i; 
 	 
 	for (i = *w + 1; i < MAXLIST; i++) 
 		if (list_ptr->entry[i]) 
 			break; 
 	*w = i; 
 } 
 /* Empty: return non-zero if the list is empty.					*/ 
 Boolean_type Empty(List_type *list_ptr) 
 { 
 	int w = 0; 
 	Start(list_ptr, &w); 
 	if (w < MAXLIST) 
 		return FALSE; 
 	else 
 		return TRUE; 
 } 
 /* Retrieve: retrieve item x in current window position.	*/ 
 void Retrieve(List_type *list_ptr, int *w, Item_type *item) 
 { 
 	*item = list_ptr->entry[*w]; 
 } 
 /* Visit: print the item retrieved from the list.			*/ 
 void Visit(Item_type item) 
 { 
 	printf("item is <%c>", item); 
 } 
