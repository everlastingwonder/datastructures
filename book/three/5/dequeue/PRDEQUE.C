#include	"general.h"
#include	"deque.h"
#include	"calls.h"

/* PrDeque: print deque according to flag: 0 FRONT, 1 REAR	*/
void PrDeque(Deque_type *deque_ptr, int flag)
{
	Item_type item;

	if (flag == FRONT) 
		while (!Empty(deque_ptr)) {
			DeleteFront(deque_ptr, &item);
			printf("%c", item);
		}
	else 
		while (!Empty(deque_ptr)) {
			DeleteRear(deque_ptr, &item);
			printf("%c", item);
		}
	printf("\n");
}
