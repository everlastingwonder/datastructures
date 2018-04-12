 #include	"general.h"		 
 #include	"node.h"	 
 #include	"queue.h" 
 /* Initialize: initialize the queue to be empty.			*/ 
 void Initialize(Queue_type *queue_ptr) 
 { 
 	queue_ptr->front = queue_ptr->rear = NULL; 
 } 
