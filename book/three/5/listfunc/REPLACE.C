#include	"list.h"

/* Replace: replace the item at the window 				*/
void Replace(List_type *list_ptr, int w, Item_type item)
{
	list_ptr->entry[w] = item;
}
