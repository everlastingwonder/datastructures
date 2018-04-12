#include	"list.h"

/* Retrieve: retrieve the item at the window				*/
void Retrieve(List_type *list_ptr, int w, Item_type *item)
{
	*item = list_ptr->entry[w];
}
