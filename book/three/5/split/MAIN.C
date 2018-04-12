#include	"general.h"
#include	"deque.h"
#include	"calls.h"

void main(void)
{
	int i;
	Item_type item;
	Deque_type deque;
	Deque_type *dp = &deque;

	Initialize(&dp->front);
	Initialize(&dp->rear);
	printf("Put %d elements in the front stack\n", MAXSTACK);
	for (i = 0; i < MAXSTACK; i++)
		AddFront(dp, (Item_type) 'a'+i);
	printf("Add one more to cause StackSplit\n");
	AddFront(dp, (Item_type) 'a'+i);
	printf("Now delete items from rear stack\n");
	while (!Empty(&dp->front) || !Empty(&dp->rear)) {
		DeleteRear(dp, &item);
		printf("%c", item);
	}
	printf("\n\nPut %d elements in the rear stack\n", MAXSTACK);
	for (i = 0; i < MAXSTACK; i++)
		AddRear(dp, (Item_type) 't'+i);
	printf("Add one more to cause StackSplit\n");
	AddRear(dp, (Item_type) 't'+i);
	printf("Now delete items from front stack\n");
	while (!Empty(&dp->front) || !Empty(&dp->rear)) {
		DeleteFront(dp, &item);
		printf("%c", item);
	}
	printf("\n");
}
