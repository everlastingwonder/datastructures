 #include	"general.h"		 
 #include	"stack.h"	 
 /* ReverseRead: read one line of input and write it backward. 	*/ 
 void ReverseRead(void) 
 { 
 	Item_type  item; 
 	Item_type  *item_ptr = &item; 
 	Stack_type stack; 
 	Stack_type *stack_ptr = &stack; 
 	Initialize(stack_ptr);			/* Initialize stack to be empty. */ 
 	while (!Full(stack_ptr) && (item = getchar()) != '\n') 
 		Push(item, stack_ptr);		/* Push each item onto the stack.  */ 
 /**/ 
 	while (!Empty(stack_ptr)) { 
 		Pop(item_ptr, stack_ptr);	/* Pop an item from the stack. 	*/ 
 		putchar(item);			 
 	} 
 	putchar('\n'); 
 } 
