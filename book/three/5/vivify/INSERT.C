 #include	"general.h" 
 #include	"stack.h" 
 #include	"calls.h" 
 /* Insert: insert item at the spot after the window		*/ 
 void Insert(List_type *list_ptr, int *w, Item_type item) 
 { 
 	if (Full(list_ptr)) 
 		Error("List is full"); 
 	else { 
 		list_ptr->entry[++list_ptr->count] = list_ptr->entry[*w+1]; 
 		list_ptr->entry[*w+1] = item; 
 	} 
 } 
