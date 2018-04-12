 #include	"general.h"		 
 #include	"list.h"	 
 #include	"calls.h" 
 /* Traverse: traverse the list and invoke Visit for each item.	*/ 
 void Traverse(List_type *list_ptr, void (*Visit)(Item_type)) 
 { 
 	int w; 
 	Item_type item; 
 	if (!Empty(list_ptr)) {				/* only if not empty*/ 
 		Start(list_ptr, &w); 
 		while (!IsLast(list_ptr, &w)) { 
 			Retrieve(list_ptr, &w, &item); 
 			(*Visit)(item); 
 			Next(list_ptr, &w);		/* next position in the list*/ 
 		} 
 		Retrieve(list_ptr, &w, &item);	/* Get last item.	*/	 
 		(*Visit)(item); 
 	} 
 } 
