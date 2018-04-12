#include	"node.h"

/* Count: count the number of nodes in the linked list		*/
int Count(Node_type *head)
{
	int n;
	Node_type *p;

	for (n = 0, p = head; p; p = p->next)
		n++;
	return n;
}
