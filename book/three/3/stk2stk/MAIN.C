#include	"general.h"
#include	"stack.h"
#include	"calls.h"

/* test EmptyStack function for exercise e3a	*/
void main(void)
{
	int i;
	Stack_type s, t;
	Stack_type *ps = &s, *pt = &t;

	printf("Put 5 items: abcde in ps then empty it into pt\n");
	Initialize(ps);
	Initialize(pt);
	for (i = 0; i < 5; i++)
		Push((Item_type) ('a'+i), ps);
	EmptyStack(pt, ps);
	for (i = 0; i < 5; i++)
		Push((Item_type) ('a'+i), ps);
	EmptyStack(pt, ps);
	printf("pt contains two copies of ps:\n");
	while (!StackEmpty(pt)) {
		Pop(&i, pt);
		printf("%c", i);
	}
	for (i = 0; i < 5; i++)
		Push((Item_type) ('a'+i), ps);
	EmptyStack(pt, ps);
	for (i = 0; i < 5; i++)
		Push((Item_type) ('a'+i), ps);
	EmptyStack(pt, ps);
	for (i = 0; i < 5; i++)
		Push((Item_type) ('a'+i), ps);
	EmptyStack(pt, ps);
	printf("\npt contains three copies of ps:\n");
	while (!StackEmpty(pt)) {
		Pop(&i, pt);
		printf("%c", i);
	}
}
