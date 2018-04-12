#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Delete: delete node p from the list; no other ptr available */
void Delete(Node_type *p)
{
	Node_type *tmp;

	if (p == NULL)
		Error("Node nonexistent");
	else if (p->next == NULL)
		Error("Cannot delete last node");
	else {
		tmp = p->next;
		*p = *tmp;
		free(tmp);
	}
}
