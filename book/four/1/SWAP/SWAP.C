#include	"node.h"

/* Swap: interchange pointers p and q						*/ 
void Swap(Node_type **p, Node_type **q)
{
	Node_type *tmp;

	tmp = *q;
	*q = *p;
	*p = tmp;
}
