#include	"general.h"
#include	"node.h"
#include	"calls.h"

/* InsertNodeAfter: insert node q after node p				*/
void InsertNodeAfter(Node_type *p, Node_type *q)
{
	if (p == NULL || q == NULL)
		Error("Either node p or q or both are nonexistent");
	else {
		q->next = p->next;
		q->prev = p;
		if (p->next)
			p->next->prev = q;
		p->next = q;
	}
}
