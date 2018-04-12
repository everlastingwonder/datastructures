#include	"general.h"
#include	"node.h"
#include	"calls.h"

void main(void)
{
	Node_type *p, *q;

	q = malloc(sizeof(Node_type));
	q->c = 'q';
	printf("Before Create, expected value: q\n");
	printf("q %x   q->c: %c\n", q, q->c);
	p = Create(q);
	printf("After creating p and copying q into it\n");
	printf("q %x   q->c: %c    p %x  p->c: %c\n", 
			q, q->c, p, p->c);
}
