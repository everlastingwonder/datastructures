 #include	"general.h"		/**/ 
 #include	"list.h"		/**/ 
 #include	"calls.h"		/**/ 
 		/**/ 
 List_type list = { 'a', '\0', '\0', 'b', 'c', '\0', 'd', '\0', 'e', '\0', }; 
 /* test functions for list support							*/ 
 void main(void) 
 { 
 	int w = 6;				/* current window in the list	*/ 
 	printf("Expected size of list is 5, received %d", Size(&list));	 
 	printf("w starts at %d and changes to the first element", w); 
 	printf("of the list when the deleted element was the last one"); 
 	printf("or moves to the next element otherwise."); 
 	Traverse(&list, Visit); 
 } 
