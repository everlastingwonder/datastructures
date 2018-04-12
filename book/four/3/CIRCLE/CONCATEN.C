#include	"general.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Concatenate: append the second list to the first 		*/
void Concatenate(Queue_type *first, Queue_type *second)
{
	Node_type *tmp;

	if (first->rear == NULL)		/* first list is empty	*/
		first->rear = second->rear;
	else if (second->rear) {		/* second not empty		*/
		tmp = second->rear->next;
		second->rear->next = first->rear->next;
		first->rear->next = tmp;
		first->rear = second->rear;
		second->rear = NULL;
	}
}
