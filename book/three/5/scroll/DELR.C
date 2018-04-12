#include	"general.h"
#include	"scroll.h"
#include	"calls.h"

/* DeleteRear: delete an item from the rear of the scroll	*/
void DeleteRear(Scroll_type *scroll_ptr, Item_type *item)
{
	if (Empty(scroll_ptr))
		Error("Scroll is empty");
	else {
		*item = scroll_ptr->entry[scroll_ptr->rear];
		if (scroll_ptr->rear == scroll_ptr->front) {
			scroll_ptr->front = 0;
			scroll_ptr->rear = -1;
		} else if (--scroll_ptr->rear < 0) 
			scroll_ptr->rear = MAXSCROLL-1;
	}
}
