#include	"general.h"
#include	"node.h"
#include	"calls.h"

/* InsertBefore: insert node q before node p				*/
void InsertBefore(Node_type **p, Node_type *q)
{
	if (q == NULL)
		Error("Node q is nonexistent");
	else if (*p == NULL) {
		*p = q;
		q->next = NULL;
	} else {
		q->next = (*p)->next;
		(*p)->next = q;
		SwapValues(*p, q);
	}
}
