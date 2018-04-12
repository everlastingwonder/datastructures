 #include	"general.h" 
 #include	"node.h" 
 #include	"calls.h" 
 /* test Traverse and Visit functions			*/ 
 void main(void) 
 { 
 	int i; 
 	Node_type *p, *r; 
 	Node_type *head = NULL; 
 	Node_type *last = NULL; 
 	for (i = 'a'; i < 'e'; i++) { 
 		p = MakeNode((Item_type) i); 
 		if (head == NULL) 
 			head = p; 
 		else 
 			InsertNode(last, p); 
 		last = p; 
 	} 
 	printf("Expecting: a, b, c, d"); 
 	Traverse(head, Visit); 
 	p = MakeNode('f'); 
 	InsertBetween(p, &head, &r, head); 
 	printf(": f, a, b, c, d"); 
 	Traverse(head, Visit); 
 	p = MakeNode('g'); 
 	r = head->next; 
 	InsertBetween(p, &head, &r, head->next->next); 
 	printf(": f, a, g, b, c, d"); 
 	Traverse(head, Visit); 
 	Delete(head, head->next); 
 	printf(": f, g, b, c, d"); 
 	Traverse(head, Visit); 
 	Delete(head->next, head->next->next); 
 	printf(": f, g, c, d"); 
 	Traverse(head, Visit); 
 } 
