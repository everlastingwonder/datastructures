 #include	"general.h" 
 #include	"stack.h" 
 #include	"calls.h" 
 /* Delete: delete the item at position count				*/ 
 void Delete(List_type *list_ptr, int *w) 
 { 
 	if (Empty(list_ptr)) 
 		Error("List is empty"); 
 	else { 
 		list_ptr->entry[*w] = list_ptr->entry[list_ptr->count--]; 
 		if (Empty(list_ptr)) 
 			Start(list_ptr, w); 
 		else if (*w > Size(list_ptr)) 
 			Finish(list_ptr, w); 
 	} 
 } 
