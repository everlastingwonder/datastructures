#include	"general.h"
#include	"node.h"
#include	"queue.h"
#include	"calls.h"

/* test functions for section 4.2.4 of DSPD in C	*/
void main(void)
{
	Item_type x;
	Queue_type queue;
	Queue_type *qp = &queue;

	Initialize(qp);
	DeleteQueue(&x, qp);
	printf("Is the queue empty? (expecting 1): %d\n", Empty(qp));
	printf("Is the queue full?  (expecting 0): %d\n", Full(qp));
	printf("Delete node from empty queue, expecting NULL, got %x\n", x);
	AddQueue('a', qp);
	AddQueue('b', qp);
	AddQueue('c', qp);
	DeleteQueue(&x, qp);
	printf("Is the queue empty? (expecting 0): %d\n", Empty(qp));
	printf("Is the queue full?  (expecting 0): %d\n", Full(qp));
	printf("Delete node, expecting a, got %c\n", x);
	DeleteQueue(&x, qp);
	printf("Delete node, expecting b, got %c\n", x);
	DeleteQueue(&x, qp);
	printf("Delete node, expecting c, got %c\n", x);
	DeleteQueue(&x, qp);
	printf("Is the queue empty? (expecting 1): %d\n", Empty(qp));
	printf("Is the queue full?  (expecting 0): %d\n", Full(qp));
	printf("Delete node from empty queue, expecting NULL, got %x\n", x);
}
