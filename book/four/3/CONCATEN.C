#include	"general.h"
#include	"node.h"

/* Concatenate: append the second list to the first 		*/
void Concatenate(Node_type **first, Node_type *second)
{
	Node_type *p;

	if (*first == NULL)			/* first list is empty ?	*/
		*first = second;		/* then point to second		*/
	else {
		for (p = *first; p->next; p = p->next)
			;					/* find end of first list	*/
		p->next = second;		/* append second list		*/
	}
}
