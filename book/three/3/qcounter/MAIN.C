 #include	"general.h" 
 #include	"queue.h" 
 /* test queue mechanism							*/ 
 void main() 
 { 
 	Item_type item; 
 	Queue_type queue; 
 	Queue_type *queue_ptr = &queue; 
 	Initialize(queue_ptr); 
 	printf("Queue is empty, it has %d items", Size(queue_ptr)); 
 	printf("Enter lines of text and the program queues them."); 
 	printf("Use Ctrl-Z (EOF) to terminate the program."); 
 	while ((item = getchar()) != EOF) { 
 		ungetc(item, stdin); 
 		while (!Full(queue_ptr) && (item = getchar()) != '\n') 
 			AddQueue(item, queue_ptr); 
 		printf("queue has %d items", Size(queue_ptr)); 
 		while (!Empty(queue_ptr)) { 
 			DeleteQueue(&item, queue_ptr); 
 			printf("%c", item); 
 		} 
 		printf(""); 
 	} 
 } 
