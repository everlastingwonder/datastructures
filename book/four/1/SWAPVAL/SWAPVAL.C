#include	"node.h"

/* SwapValues: interchange values that p and q point to		*/
void SwapValues(Node_type *p, Node_type *q)
{
	Node_type tmp;

	tmp = *q;
	*q = *p;
	*p = tmp;
}
