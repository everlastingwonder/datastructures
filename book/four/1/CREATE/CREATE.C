#include	"general.h"
#include	"node.h"

/* Create: allocate space a new node and copy q into i		*/
Node_type *Create(Node_type *q)
{
	if ((p = (Node_type *) malloc(sizeof(Node_type))) != NULL)
		*p = *q;
	return p;
}
