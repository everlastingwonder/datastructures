#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Delete: delete node p from the doubly linked list		*/
void Delete(Node_type *p)
{
	if (p == NULL)
		Error("Node p is nonexistent");
	else {
		if (p->prev) 
			p->prev->next = p->next;
		if (p->next)
			p->next->prev = p->prev;
	}
}
