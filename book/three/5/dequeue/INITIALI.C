#include	"deque.h"

/* Initialize: initialize deque								*/
void Initialize(Deque_type *deque_ptr)
{
	deque_ptr->front = 0;
	deque_ptr->rear  = -1;
}
