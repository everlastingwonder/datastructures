 #include	"general.h" 
 #include	"calls.h" 
 void main() 
 { 
 	int c; 
 	printf("Enter lines of text and the program reverses it."); 
 	printf("Use Ctrl-Z (EOF) to terminate the program."); 
 	while ((c = getchar()) != EOF) { 
 		ungetc(c, stdin); 
 		ReverseRead(); 
 	} 
 } 
