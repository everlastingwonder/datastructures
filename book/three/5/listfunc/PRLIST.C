#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* PrList: print a list without altering it					*/
void PrList(List_type *list_ptr)
{
	int w;
	Item_type item;

	for (Start(list_ptr, &w); ; Next(list_ptr, &w)) {
		Retrieve(list_ptr, w, &item);
		printf("%c", item);
		if (IsLast(list_ptr, w))
			break;
	}
	printf("\n");
}
