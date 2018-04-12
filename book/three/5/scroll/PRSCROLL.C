#include	"general.h"
#include	"scroll.h"
#include	"calls.h"

/* PrScroll: print scroll according to flag: 0 FRONT, 1 REAR*/
void PrScroll(Scroll_type *scroll_ptr, int flag)
{
	Item_type item;

	if (flag == FRONT) 
		while (!Empty(scroll_ptr)) {
			DeleteFront(scroll_ptr, &item);
			printf("%c", item);
		}
	else
		while (!Empty(scroll_ptr)) {
			DeleteRear(scroll_ptr, &item);
			printf("%c", item);
		}
	printf("\n");
}
