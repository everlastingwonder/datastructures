#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/

/* Erase: free up the space allocated for a polynomial		*/
void Erase(Polynomial_type *p)
{
	Polynomial_type *tmp;

	while (p) {
		tmp = p;
		p = p->next;
		free(tmp);
	}
}
