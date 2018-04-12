#include	"general.h"
#include	"list.h"

/* InsertBefore: insert item before current window			*/
void InsertBefore(List_type *list_ptr, int *w, Item_type item)
{
	int i, j;

	if (*w <= 0) {					/* shuffle list up		*/
		for (i = *w+1; i < MAXLIST-1 && list_ptr->entry[i]; i++)
			;
		for (j = i; j >= 1; j--)
			list_ptr->entry[j] = list_ptr->entry[j-1];
		*w = 1;
	} else if (list_ptr->entry[*w-1]) 	/* move window one pos.	*/
		if (*w < MAXLIST-1 && list_ptr->entry[*w+1] == NULL) {	
			list_ptr->entry[*w+1] = list_ptr->entry[*w];
			(*w)++;
		} else {					/* find NULL below w	*/
			for (i = *w-1; i >= 0 && list_ptr->entry[i]; i--)
				;
			if (i >= 0)
				for (j = i; j <= *w-1; j++)
					list_ptr->entry[j] = list_ptr->entry[j+1];
			else {					/* find NULL above w	*/
				for (i = *w+1; i <= MAXLIST-1 && list_ptr->entry[i]; i++)
					;
				for (j = i; j >= *w+1; j--)
					list_ptr->entry[j] = list_ptr->entry[j-1];
				(*w)++;
			}
		}
	list_ptr->entry[*w-1] = item;
}
