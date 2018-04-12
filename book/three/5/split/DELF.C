#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* DeleteFront: delete an item from the front of the queue	*/
void DeleteFront(Deque_type *deque_ptr, Item_type *item)
{
	if (Empty(&deque_ptr->front) && Empty(&deque_ptr->rear))
		Error("Deque is empty");
	else {
		if (Empty(&deque_ptr->front))
			SplitStack(&deque_ptr->rear, &deque_ptr->front);
		Pop(&deque_ptr->front, item);
	}
}
