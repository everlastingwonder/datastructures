#include	"general.h"
#include	"list.h"
#include	"calls.h"

/* InsertBefore: insert item before current window			*/
void InsertBefore(List_type *list_ptr, int *w, Item_type item)
{
	int i;

	if (list_ptr->count >= MAXLIST-1)
		Error("No space for insert before operation");
	else {
		for (i = list_ptr->count; i >= *w+1; i--)
			list_ptr->entry[i] = list_ptr->entry[i-1];
		list_ptr->count++;
		list_ptr->entry[*w] = item;
		(*w)++;
	}
}
