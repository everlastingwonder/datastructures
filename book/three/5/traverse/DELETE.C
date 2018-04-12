 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 /* Delete: delete entry at window and update window.		*/ 
 void Delete(List_type *list_ptr, int *w) 
 { 
 	Boolean_type flag; 
 	 
 	flag = IsLast(list_ptr, w); 
 	list_ptr->entry[*w] = NULL; 
 	if (flag) 
 		Start(list_ptr, w); 
 	else 
 		Next(list_ptr, w); 
 } 
