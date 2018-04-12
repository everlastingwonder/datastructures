#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* DeleteRear: delete an item from the rear of the queue	*/
void DeleteRear(Deque_type *deque_ptr, Item_type *item)
{
	if (Empty(deque_ptr))
		Error("Deque is empty");
	else {
		*item = deque_ptr->entry[deque_ptr->rear];
		if (deque_ptr->rear == deque_ptr->front) {
			deque_ptr->front = 0;
			deque_ptr->rear = -1;
		} else if (--deque_ptr->rear < 0) 
			deque_ptr->rear = MAXDEQUE-1;
	}
}
