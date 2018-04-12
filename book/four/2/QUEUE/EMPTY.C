 #include	"general.h"		 
 #include	"node.h"	 
 #include	"queue.h" 
 #include	"calls.h" 
 /* Empty: return non-zero if the queue is empty.			*/ 
 Boolean_type Empty(Queue_type *queue_ptr) 
 { 
 	return queue_ptr->front == NULL && queue_ptr->rear == NULL; 
 } 
 /* Full: always return FALSE because it is a linked queue.	*/ 
 Boolean_type Full(Queue_type *queue_ptr) 
 { 
 	return FALSE; 
 } 
