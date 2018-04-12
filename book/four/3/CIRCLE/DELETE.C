#include	"general.h"
#include	"queue.h"
#include	"calls.h"

/* Delete: delete node p from the queue						*/
void Delete(Queue_type *qp, Node_type *p)
{
	Node_type *q;

	if (qp->rear == NULL)
		Error("Queue is empty");
	else {
		if (qp->rear->next == qp->rear)
			qp->rear = NULL;
		else {
			for (q = qp->rear->next; q->next != p; q = q->next)
				;
			q->next = p->next;
		}
		p->next = NULL;
	}
}
