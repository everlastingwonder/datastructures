 #include	"general.h"		 
 #include	"node.h"	 
 #include	"stack.h"		 
 #include	"calls.h"	 
 /* Empty: return non-zero if the stack is empty.				*/ 
 Boolean_type Empty(Stack_type *sp) 
 { 
 	return sp->top == NULL; 
 } 
 /* Full: always return FALSE because it is a linked stack.	*/ 
 Boolean_type Full(Stack_type *sp) 
 { 
 	return FALSE; 
 } 
