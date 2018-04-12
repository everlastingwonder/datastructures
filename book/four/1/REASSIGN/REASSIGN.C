#include	"general.h"
#include	"node.h"

/* Reassign: free up what p points to and assign q to it	*/
void Reassign(Node_type **p, Node_type *q)
{
	if (*p)
		free(*p);
	*p = q;
}
