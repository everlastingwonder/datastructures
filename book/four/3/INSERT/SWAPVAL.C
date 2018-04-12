#include	"node.h"		/*\delete*/

/* SwapValues: interchange values that p and q point to		*/
void SwapValues(Node_type *p, Node_type *q)
{
	Item_type tmp;

	tmp = q->info;
	q->info = p->info;
	p->info = tmp;
}
