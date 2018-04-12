 #include	"general.h"	 
 #include	"list.h"		 
 #include	"calls.h"		 
 /* IsLast: non-zero if w is the last entry of the list          */ 
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
 /* Start: position the window at the first entry of list    */ 
 void Start(List_type *list_ptr, int *w) 
 { 
     int i; 
     if (Empty(list_ptr)) 
         *w = -1; 
     else { 
         for (i = 0; i < MAXLIST && !list_ptr->entry[i]; i++) 
             ; 
         *w = i; 
     } 
 } 
 /* Next: position the window at the next entry of list      */ 
 void Next(List_type *list_ptr, int *w) 
 { 
     int i; 
      
     for (i = *w + 1; i < MAXLIST && !list_ptr->entry[i]; i++) 
         ; 
     if (i <= MAXLIST-1 && list_ptr->entry[i]) 
         *w = i; 
     else 
         Error("No next entry in the list"); 
 } 
 /* Empty: return non-zero if the list is empty              */ 
 Boolean_type Empty(List_type *list_ptr) 
 { 
     return Size(list_ptr) == 0; 
 } 
 /* Error: print error message and terminate the program     */ 
 void Error(char *s) 
 { 
     fprintf(stderr, "%s", s); 
 } 
