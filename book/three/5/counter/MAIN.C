 #include	"general.h" 
 #include	"list.h" 
 #include	"calls.h" 
 List_type list = { 
 	3,				/* length of the list					*/ 
 	{ 'a', 'b', 'c' } 
 }; 
 /* test functions for list support							*/ 
 void main(void) 
 { 
 	int w = 0;				/* current window in the list	*/ 
 	int i, j; 
 	List_type *pl = &list; 
 	printf("Expected size of list is 3, received %d",  
 			Size(pl));	 
 	for (i = 0; i < 3; i++) { 
 		Delete(pl, &w); 
 		printf(" delete #%d, w is %d", i, w); 
 		for (j = 0; j < Size(pl); j++) { 
 			printf("%2d : ", j); 
 			if (pl->entry[j]) 
 				putchar(pl->entry[j]); 
 			putchar('\n'); 
 		} 
 	} 
 	printf(" the end of main w is %d", w); 
 } 
