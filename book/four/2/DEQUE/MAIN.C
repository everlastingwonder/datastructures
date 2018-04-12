#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* main: test linked queue mechanism - one pointer	*/
void main(void)
{
	Node_type *node_ptr;
	Deque_type deque;
	Deque_type *dp = &deque;

	Initialize(dp);
	DeleteNodeHead(&node_ptr, dp);
	printf("DeleteNodeHead - empty queue: %x\n", node_ptr->info);
	AddNodeHead('a', dp);
	DeleteNodeTail(&node_ptr, dp);
	printf("DeleteNodeTail - expect 'a': %c\n", node_ptr->info);
	AddNodeHead('b', dp);
	AddNodeTail('c', dp);
	AddNodeTail('d', dp);
	AddNodeHead('e', dp);
	DeleteNodeHead(&node_ptr, dp);
	printf("DeleteNodeHead - expect 'e': %c\n", node_ptr->info);
	DeleteNodeHead(&node_ptr, dp);
	printf("DeleteNodeHead - expect 'b': %c\n", node_ptr->info);
	DeleteNodeTail(&node_ptr, dp);
	printf("DeleteNodeTail - expect 'd': %c\n", node_ptr->info);
	DeleteNodeTail(&node_ptr, dp);
	printf("DeleteNodeTail - expect 'c': %c\n", node_ptr->info);
	DeleteNodeTail(&node_ptr, dp);
	printf("DeleteNodeTail - empty deque %x\n", node_ptr->info);
}
