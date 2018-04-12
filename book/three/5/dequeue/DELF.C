#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* DeleteFront: delete an item from the front of the queue	*/
void DeleteFront(Deque_type *deque_ptr, Item_type *item)
{
	if (Empty(deque_ptr))
		Error("Deque is empty");
	else {
		*item = deque_ptr->entry[deque_ptr->front];
		if (deque_ptr->front != deque_ptr->rear) 
			deque_ptr->front = (deque_ptr->front + 1) % MAXDEQUE;
		else {
			deque_ptr->front = 0;
			deque_ptr->rear = -1;
		}
	}
}
