#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* InsertNodeBefore: insert node q before node p			*/
void InsertNodeBefore(Node_type *p, Node_type *q)
{
	if (p == NULL || q == NULL)
		Error("Either node p or q or both are nonexistent");
	else {
		q->next = p;
		q->prev = p->prev;
		if (p->prev)
			p->prev->next = q;
		p->prev = q;
	}
}
