 #include	"general.h"		 
 /* Help: provide instructions for the user.					*/ 
 void Help(void) 
 { 
 	printf("Enter a string of commands in reverse Polish form."); 
 	printf("The valid instructions are:"); 
 	printf(" ? Read a polynomial onto stack"); 
 	printf(" + Add top two polynomials on stack"); 
 	printf(" - Subtract top two polynomials on stack"); 
 	printf(" * Multiply top two polynomials on stack"); 
 	printf(" / Divide top two polynomials on stack"); 
 	printf(" = Print polynomial on top of the stack"); 
 } 
