 #include	"general.h"		 
 #include	"queue.h"	 
 /* Size: return current number of items in the queue.		*/ 
 int Size(Queue_type *queue_ptr) 
 { 
 	return queue_ptr->count; 
 } 
 /* Empty: returns non-zero if the queue is empty.			*/ 
 Boolean_type Empty(Queue_type *queue_ptr) 
 { 
 	return queue_ptr->count <= 0; 
 } 
 /* Full: returns non-zero if the queue is full.				*/ 
 Boolean_type Full(Queue_type *queue_ptr) 
 { 
 	return queue_ptr->count >= MAXQUEUE; 
 } 
