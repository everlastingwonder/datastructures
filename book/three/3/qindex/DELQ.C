 #include	"general.h"		 
 #include	"queue.h"	 
 /* DeleteQueue: delete and return item in front of queue.	*/ 
 void DeleteQueue(Item_type *item_ptr, Queue_type *queue_ptr) 
 { 
 	if (queue_ptr->rear <= -1) 
 		Error("Queue is empty"); 
 	else { 
 		*item_ptr = queue_ptr->entry[queue_ptr->front]; 
 		if (queue_ptr->front != queue_ptr->rear) 
 			queue_ptr->front = (queue_ptr->front + 1) % MAXQUEUE; 
 		else {				/* The queue is now empty.		*/ 
 			queue_ptr->front = 0; 
 			queue_ptr->rear = -1; 
 		} 
 	} 
 } 
