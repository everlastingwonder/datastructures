 #include	"general.h" 
 #include	"node.h" 
 #include	"queue.h" 
 #include	"calls.h" 
 /* test functions for section 4.2.4 of DSPD in C	*/ 
 void main(void) 
 { 
 	Queue_type queue; 
 	Queue_type *qp = &queue; 
 	Node_type  *p; 
 	Initialize(qp); 
 	DeleteNode(&p, qp); 
 	printf("Is the queue empty? (expecting 1): %d", Empty(qp)); 
 	printf("Is the queue full?  (expecting 0): %d", Full(qp)); 
 	printf("Delete node from empty queue, expecting NULL, got %x", p); 
 	p = Makenode((Item_type) 'a'); 
 	AddNode(p, qp); 
 	p = Makenode((Item_type) 'b'); 
 	AddNode(p, qp); 
 	p = Makenode((Item_type) 'c'); 
 	AddNode(p, qp); 
 	DeleteNode(&p, qp); 
 	printf("Is the queue empty? (expecting 0): %d", Empty(qp)); 
 	printf("Is the queue full?  (expecting 0): %d", Full(qp)); 
 	printf("Delete node, expecting a, got %c", p->info); 
 	DeleteNode(&p, qp); 
 	printf("Delete node, expecting b, got %c", p->info); 
 	DeleteNode(&p, qp); 
 	printf("Delete node, expecting c, got %c", p->info); 
 	DeleteNode(&p, qp); 
 	printf("Is the queue empty? (expecting 1): %d", Empty(qp)); 
 	printf("Is the queue full?  (expecting 0): %d", Full(qp)); 
 	printf("Delete node from empty queue, expecting NULL, got %x", p); 
 } 
