 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 /* Delete: delete entry at window and update window.		*/ 
 void Delete(List_type *list_ptr, int *w) 
 { 
 	int i; 
 	for (i = *w + 1; i < list_ptr->count; i++) 
 		list_ptr->entry[i - 1] = list_ptr->entry[i]; 
 	list_ptr->count--; 
 	if (Empty(list_ptr)) 
 		Start(list_ptr, w); 
 	else if (*w > Size(list_ptr)) 
 		Finish(list_ptr, w); 
 } 
