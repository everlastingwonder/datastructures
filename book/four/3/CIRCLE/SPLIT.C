#include	"general.h"
#include	"queue.h"
#include	"calls.h"

/* Split: split a list at node p into two lists				*/
void Split(Node_type *p, Queue_type *oldlist, Queue_type *newlist)
{
	if (!p && !oldlist->rear)
		Error("Invalid list");
	else if (p == oldlist->rear) {
		newlist->rear = oldlist->rear;
		oldlist->rear = NULL;
	} else {
		newlist->rear = p;
		p = p->next;
		newlist->rear->next = oldlist->rear->next;
		oldlist->rear->next = p;
	}
}
