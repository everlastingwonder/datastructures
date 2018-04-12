#include	"general.h"
#include	"scroll.h"
#include	"calls.h"

/* DeleteFront: delete an item from the front of the scroll	*/
void DeleteFront(Scroll_type *scroll_ptr, Item_type *item)
{
	if (Empty(scroll_ptr))
		Error("Scroll is empty");
	else {
		*item = scroll_ptr->entry[scroll_ptr->front];
		if (scroll_ptr->front != scroll_ptr->rear) 
			scroll_ptr->front = (scroll_ptr->front + 1) % MAXSCROLL;
		else {
			scroll_ptr->front = 0;
			scroll_ptr->rear = -1;
		}
	}
}
