#include	"general.h"
#include	"list.h"
#include	"calls.h"

List_type list = { 'a', '\0', 'b', '\0', '\0', 'c', 'd', '\0', 'e', '\0' };

/* test functions for exercise E2, page 99					*/
void main()
{
	int begin, end;
	List_type *pl = &list;
	List_type even, odd;

	printf("Expected size of list is 3 (abc), received %d\n", 
			Size(pl));	
	printf("Original list: a NULL b NULL NULL c d NULL e NULL\n");
	printf("Original list: ");
	PrList(pl);
	OddEvenSplit(pl, &even, &odd);
	printf("Original list after odd/even split: ");
	PrList(pl);
	printf("Odd list, expected: ace, received: ");
	PrList(&odd);
	printf("Even list, expected: bd, received: ");
	PrList(&even);
	Reverse(pl);
	printf("\nList after being reversed: ");
	PrList(pl);
	Start(pl, &begin);
	Finish(pl, &end);
	while (!Empty(pl)) {
		DeleteFirst(pl, &begin);
		DeleteLast(pl, &end);
		printf("\List after removing first and last: ");
		PrList(pl);
	}
}
