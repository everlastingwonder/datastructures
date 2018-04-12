 #include	"general.h"		 
 /* Prompt: prompt the user for command line.				*/ 
 void Prompt(void) 
 { 
 	int c; 
 	printf("Enter a string of commands or ! for help."); 
 	while ((c = getchar()) == '\n') 
 		/* empty */ ;		/* Discard leftover newlines, if any.	*/ 
 	ungetc(c, stdin); 
 } 
