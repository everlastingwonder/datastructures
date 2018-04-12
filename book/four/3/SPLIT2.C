#include	"general.h"
#include	"node.h"

/* Split: split a list into odd and even lists				*/
void Split(Node_type *head, Node_type **odd, Node_type **even)
{
	Node_type *p, *q;

	if (!head) 
		*odd = *even = NULL;
	else {
		*odd = p = head;
		*even = q = head->next;
		while (p && q) {
			p = p->next = q->next;
			if (p)
				q = q->next = p->next;
		}
	}
}
