#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* AddFront: add item to the front of the queue			*/
void AddFront(Deque_type *deque_ptr, Item_type item)
{
	if (Full(deque_ptr))
		Error("Deque is full");
	else {
		if (Empty(deque_ptr))
			deque_ptr->rear = MAXDEQUE-1;
		if (--deque_ptr->front < 0)
			deque_ptr->front = MAXDEQUE-1;
		deque_ptr->entry[deque_ptr->front] = item;
	}
}
