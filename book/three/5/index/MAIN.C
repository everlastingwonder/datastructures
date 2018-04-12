 #include    "general.h" 
 #include    "list.h" 
 #include    "calls.h" 
 List_type list = { 'a', '\0', '\0', 'b', 'c', '\0', 'd', '\0', 'e', '\0' }; 
 /* test functions for list support                          */ 
 void main(void) 
 { 
     int w = 6;              /* current window in the list   */ 
     int i, j; 
     List_type *lp = &list; 
     printf("Expected size of list is 5, received %d", Size(lp));   
     printf("w starts at %d and changes to the first element", w); 
     printf("of the list when the deleted element was the last one"); 
     printf("or moves to the next element otherwise."); 
     for (i = 0; i < 5; i++) { 
         Delete(lp, &w); 
         printf(" delete %d, w is %d", i, w); 
         for (j = 0; j < MAXLIST; j++) { 
             printf("%2d : ", j); 
             if (lp->entry[j]) 
                 putchar(lp->entry[j]); 
             putchar('\n'); 
         } 
     } 
     printf(" the end of main w is %d", w); 
 } 
