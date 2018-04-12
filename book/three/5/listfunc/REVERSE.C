#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* Reverse: reverse the order of entries in the list		*/
void Reverse(List_type *list_ptr)
{
	int begin, end;
	Item_type itema, itemb;

	Start(list_ptr, &begin);
	Finish(list_ptr, &end);
	if (!Empty(list_ptr)) 
		while (begin < end) {
			Retrieve(list_ptr, begin, &itema);
			Retrieve(list_ptr, end, &itemb);
			Replace(list_ptr, begin, itemb);
			Replace(list_ptr, end, itema);
			Next(list_ptr, &begin);
			Preceding(list_ptr, &end);
		}
}
