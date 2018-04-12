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
	printf("Before swap, expected values: p and q\n");
	printf("p %x  p->c: %c,   q %x   q->c: %c\n", 
			p, p->c, q, q->c);
	SwapValues(p, q);
	printf("After swap, expected values: q and p\n");
	printf("p %x  p->c: %c,   q %x   q->c: %c\n", 
			p, p->c, q, q->c);
}
