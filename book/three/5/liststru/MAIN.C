#include	"general.h"
#include	"list.h"
#include	"calls.h"

List_type list = {
	3,				/* length of the list					*/
	{ 'a', 'b', 'c' }
};

/* test functions for list support							*/
void main(void)
{
	int w = 0;				/* current window in the list	*/
	Item_type item;
	List_type *pl = &list;

	printf("Expected size of list is 3 (abc), received %d\n", 
			Size(pl));	
	printf("Full   : %d\n", Full(pl));
	printf("Empty  : %d\n", Empty(pl));
	printf("IsFirst: %d\n", IsFirst(pl, w));
	printf("IsLast : %d\n", IsLast(pl, w));
	Preceding(pl, &w);
	Retrieve(pl, w, &item);
	printf("Preceding (should be a) is <%c>\n", item);
	printf("Insert character f after a (afbc)\n");
	w = 0;
	InsertAfter(pl, &w, 'f');
	printf("Insert character l before a (lafbc)\n");
	w = 0;
	InsertBefore(pl, &w, 'l');
	printf("Insert character m after c (lafbcm)\n");
	w = Size(pl) - 1;
	InsertAfter(pl, &w, 'm');
	w = 0;
	while (!Empty(pl)) {
		Retrieve(pl, w, &item);
		printf("%c", item);
		Delete(pl, &w);
	}
	putchar('\n');
}
