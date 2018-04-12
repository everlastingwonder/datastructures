 #include	"general.h" 
 #include	"node.h" 
 #include	"calls.h" 
 /* test Traverse and Visit functions			*/ 
 void main(void) 
 { 
 	int i; 
 	int head = -1, tail = -1; 
 	Node_type list[MAXLIST]; 
 	for (i = 'a'; i < 'e'; i++) { 
 		tail = InsertNode((Item_type) i, tail, list); 
 		if (head == -1) 
 			head = tail; 
 		printf(""); 
 		Traverse(head, tail, list, Visit); 
 	} 
 	printf(""); 
 	Traverse(head, tail, list, Visit); 
 } 
