#include	"general.h"
#include	"scroll.h"
#include	"calls.h"

/* AddScroll: add item to the rear of the queue			*/
void AddScroll(Scroll_type *scroll_ptr, Item_type item)
{
	if (Full(scroll_ptr))
		Error("Scroll is full");
	else {
		scroll_ptr->rear = (scroll_ptr->rear + 1) % MAXSCROLL;
		scroll_ptr->entry[scroll_ptr->rear] = item;
	}
}
