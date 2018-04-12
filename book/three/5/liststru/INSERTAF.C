#include	"list.h"

/* InsertAfter: insert item x after the window				*/
void InsertAfter(List_type *list_ptr, int *w, Item_type item)
{
	int i;

	for (i = list_ptr->count-1; i >= *w+1; i--) 
		list_ptr->entry[i+1] = list_ptr->entry[i];
	list_ptr->entry[*w+1] = item;
	list_ptr->count++;
}
