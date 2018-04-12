#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* DeleteRear: delete an item from the rear of the queue	*/
void DeleteRear(Deque_type *deque_ptr, Item_type *item)
{
	if (Empty(&deque_ptr->front) && Empty(&deque_ptr->rear))
		Error("Deque is empty");
	else {
		if (Empty(&deque_ptr->rear))
			SplitStack(&deque_ptr->front, &deque_ptr->rear);
		Pop(&deque_ptr->rear, item);
	}
}
