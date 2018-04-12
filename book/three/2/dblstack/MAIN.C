 #include	"general.h" 
 #include	"stack.h" 
 /* test double stack mechanism					*/ 
 void main(void) 
 { 
 	int i; 
 	Item_type item; 
 	DoubleStack_type stack; 
 	DoubleStack_type *stack_ptr = &stack; 
 	Initialize(stack_ptr); 
 	for (i = 0; i < MAXSTACK; i++) 
 		PushA((Item_type) ('a'+i), stack_ptr); 
 	for (i = MAXSTACK-1; i >= 0; i--) { 
 		PopA(&item, stack_ptr); 
 		printf("i %d, popping A, char <%c>", i, item); 
 	} 
 	Initialize(stack_ptr); 
 	for (i = 0; i <= 4; i++) { 
 		PushA((Item_type) ('a'+i), stack_ptr); 
 		PushB((Item_type) ('z'-i), stack_ptr); 
 	} 
 	for (i = 4; i >= 0; i--) { 
 		PopA(&item, stack_ptr); 
 		printf("i %d, popping A, char <%c>", i, item); 
 		PopB(&item, stack_ptr); 
 		printf("i %d, popping B, char <%c>", i, item); 
 	} 
 } 
