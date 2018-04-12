#include	"general.h"
#include	"node.h"

/* Split: split the list at node q - q goes into second	list*/
void Split(Node_type *p, Node_type *q)
{
	for ( ; p && p->next != q; p = p->next)
		;
	if (p)
		p->next = NULL;
}
