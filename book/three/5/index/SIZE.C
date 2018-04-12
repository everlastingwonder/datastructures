 #include	"general.h"	 
 #include	"list.h"		 
 /* Size: return the size of a list.                        */ 
 int Size(List_type *list_ptr) 
 { 
     int i; 
     int count = 0; 
     for (i = 0; i < MAXLIST; i++) 
         if (list_ptr->entry[i] != '\0') 
             count++; 
     return count; 
 } 
