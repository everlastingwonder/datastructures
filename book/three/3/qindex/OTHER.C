 #include	"general.h"		 
 #include	"queue.h"	 
 /* Size: return current number of items in the queue.		*/ 
 int Size(Queue_type *qp) 
 { 
 	int i; 
 	int count = 1; 
 	if (qp->rear <= -1) 
 		return 0; 
 	for (i = qp->front; i != qp->rear; i = (i + 1) % MAXQUEUE) 
 		count++; 
 	return count; 
 } 
 /* Empty: returns non-zero if the queue is empty.			*/ 
 Boolean_type Empty(Queue_type *qp) 
 { 
 	return qp->rear <= -1; 
 } 
 /* Full: returns non-zero if the queue if full.				*/ 
 Boolean_type Full(Queue_type *qp) 
 { 
 	if ((qp->rear == qp->front - 1 && qp->rear > -1) || 
 		(qp->rear == MAXQUEUE - 1 && qp->front == 0)) 
 		return TRUE; 
 	else 
 		return FALSE; 
 } 
