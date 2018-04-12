 #include	"general.h" 
 #include	"node.h" 
 #include	"stack.h" 
 #include	"calls.h" 
 /* test Push and Pop functions			*/ 
 void main(void) 
 { 
 	int c; 
 	Stack_type stack; 
 	Stack_type *sp = &stack; 
 	Initialize(sp); 
 	printf("Is the stack empty? (expecting 1): %d", Empty(sp)); 
 	Pop((Item_type *) &c, sp); 
 	printf("Try pop on empty stack: %x", c); 
 	printf("Push a, b, and c"); 
 	Push('a', sp); 
 	Push('b', sp); 
 	Push('c', sp); 
 	printf("Is the stack empty? (expecting 0): %d", Empty(sp)); 
 	printf("Is the stack full?  (expecting 0): %d", Full(sp)); 
 	Pop((Item_type *) &c, sp); 
 	printf("Pop, expecting c: %c", c); 
 	Pop((Item_type *) &c, sp); 
 	printf("Pop, expecting b: %c", c); 
 	Pop((Item_type *) &c, sp); 
 	printf("Pop, expecting a: %c", c); 
 	printf("Is the stack empty? (expecting 1): %d", Empty(sp)); 
 	Pop((Item_type *) &c, sp); 
 	printf("Tried pop on empty stack: %x", c); 
 } 
