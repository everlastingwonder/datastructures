#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* AddFront: add item to the front of the queue			*/
void AddFront(Deque_type *deque_ptr, Item_type item)
{
	if (Full(&deque_ptr->front) && Full(&deque_ptr->rear))
		Error("Deque is full");
	else {
		if (Full(&deque_ptr->front))
			SplitStack(&deque_ptr->front, &deque_ptr->rear);
		Push(&deque_ptr->front, item);
	}
}
