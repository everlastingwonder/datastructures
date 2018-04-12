#include	"general.h"
#include	"list.h"
#include	"calls.h"

#define		ODD(x)	((x)/2)*2 != (x)
/* OddEvenSplit: split a list into two list; the even 		*/
/*				 entries in one list and odd in another		*/
void OddEvenSplit(List_type *list_ptr, 
				  List_type *pe, List_type *po)
{
	int ew, ow, w;
	int count = 1;
	Item_type item;

	Initialize(pe);
	Initialize(po);
	Start(list_ptr, &w);
	Start(pe, &ew);
	Start(po, &ow);
	while (1) {
		if (ODD(count)) {
			Retrieve(list_ptr, w, &item);
			InsertAfter(po, &ow, item);
			Next(po, &ow);
		} else {
			Retrieve(list_ptr, w, &item);
			InsertAfter(pe, &ew, item);
			Next(pe, &ew);
		}
		if (IsLast(list_ptr, w))
			break;
		else
			Next(list_ptr, &w);
		count++;
	}
}
