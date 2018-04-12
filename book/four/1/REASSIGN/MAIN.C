#include	"general.h"
#include	"node.h"
#include	"calls.h"

void main(void)
{
	Node_type *p, *q;

	p = malloc(sizeof(Node_type));
	p->c = 'p';
	q = malloc(sizeof(Node_type));
	q->c = 'q';
	printf("Before Reassign, expected values: p and q\n");
	printf("p %x  p->c: %c,   q %x   q->c: %c\n", 
			p, p->c, q, q->c);
	Reassign(&p, q);
	printf("After Reassign, expected values: q and q\n");
	printf("p %x  p->c: %c,   q %x   q->c: %c\n", 
			p, p->c, q, q->c);
}
