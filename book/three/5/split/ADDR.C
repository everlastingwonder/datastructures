#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* AddRear: add item to the rear of the queue				*/
void AddRear(Deque_type *deque_ptr, Item_type item)
{
	if (Full(&deque_ptr->front) && Full(&deque_ptr->rear))
		Error("Deque is full");
	else {
		if (Full(&deque_ptr->rear))
			SplitStack(&deque_ptr->rear, &deque_ptr->front);
		Push(&deque_ptr->rear, item);
	}
}
