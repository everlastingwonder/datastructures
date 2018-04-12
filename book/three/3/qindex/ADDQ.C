 #include	"general.h"		 
 #include	"queue.h"	 
 /* AddQueue: add item to the queue.					*/ 
 void AddQueue(Item_type item, Queue_type *queue_ptr) 
 { 
 	if ((queue_ptr->rear == queue_ptr->front - 1 &&  
 		 queue_ptr->rear > -1) || 
 		(queue_ptr->rear == MAXQUEUE - 1 &&  
 		 queue_ptr->front == 0)) 
 		Error("Queue is full"); 
 	else { 
 		queue_ptr->rear = (queue_ptr->rear + 1) % MAXQUEUE; 
 		queue_ptr->entry[queue_ptr->rear] = item; 
 	} 
 } 
