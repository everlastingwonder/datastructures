#include	"general.h"
#include	"node.h"

/* Reverse: reverse a linked list while traversing it once	*/
void Reverse(Node_type **head)
{
	Node_type *p, *q;

	p = *head; 
	if (p && p->next) {		/* reverse if list > one node	*/
		q = p->next;
		p->next = NULL;
		do {
			*head = q;		/* move head ptr one position	*/
			q = q->next;	/* move q ahead one position	*/
			(*head)->next = p;
			p = *head;
		} while (q);		/* while not the end of the list*/
	}
}
