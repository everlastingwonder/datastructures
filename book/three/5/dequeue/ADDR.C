#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* AddRear: add item to the rear of the queue				*/
void AddRear(Deque_type *deque_ptr, Item_type item)
{
	if (Full(deque_ptr))
		Error("Deque is full");
	else {
		deque_ptr->rear = (deque_ptr->rear + 1) % MAXDEQUE;
		deque_ptr->entry[deque_ptr->rear] = item;
	}
}
