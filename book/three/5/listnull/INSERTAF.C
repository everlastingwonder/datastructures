#include	"general.h"
#include	"list.h"

/* InsertAfter: insert item after the window				*/
void InsertAfter(List_type *list_ptr, int *w, Item_type item)
{
	int i, j;

	if (*w >= MAXLIST-1) {				/* at the last position	*/	
		for (i = *w-1; i >= 0 && list_ptr->entry[i]; i--)
			;
		for (j = i; j <= *w-1; j++)		/* shuffle list down	*/
			list_ptr->entry[j] = list_ptr->entry[j+1];
		(*w)--;
	} else if (list_ptr->entry[*w+1])	/* next entry not empty	*/
		if (*w > 0 && list_ptr->entry[*w-1] == NULL) {
			list_ptr->entry[*w-1] = list_ptr->entry[*w];
			(*w)--;
		} else { 						/* find entry above		*/
			for (i = *w+1; i < MAXLIST-1 && list_ptr->entry[i]; i++)
				;
			if (i <= MAXLIST-1)
				for (j = i; j >= *w+1; j--)
					list_ptr->entry[j] = list_ptr->entry[j-1];
			else {						/* find entry below		*/
				for (i = *w-1; i >= 0 && list_ptr->entry[i]; i--)
					;
				for (j = i; j <= *w-1; j++)
					list_ptr->entry[j] = list_ptr->entry[j+1];
				(*w)--;
			}
		}
	list_ptr->entry[*w+1] = item;
}
