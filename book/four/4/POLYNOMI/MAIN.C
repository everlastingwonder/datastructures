 #include	"general.h"		 
 #include	"poly.h"	 
 #include	"node.h" 
 #include	"stack.h"		 
 #include	"calls.h"	 
 #define		MAXCOMMAND		10 
 /* Implement calculator for polynomials.		*/ 
 void main(void) 
 { 
 	int i, n; 
 	Stack_type stack; 
 	char command[MAXCOMMAND]; 
 	Initialize(&stack); 
 	do { 
 		n = ReadCommand(command); 
 		for (i = 0; i < n; i++) 
 			DoCommand(command[i], &stack); 
 	} while (Enquire()); 
 } 
