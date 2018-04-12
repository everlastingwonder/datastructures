#include	"general.h"
#include	"stack.h"

/* Use a stack to find the prime factorization of an int		*/
void main(void)
{
	Item_type item, num;
	Stack_type stack;
	Stack_type *stack_ptr = &stack;

	do {
		printf("Please enter a positive number: ");
		scanf("%d", &num);
	} while (num <= 0);
	Initialize(stack_ptr);
	item = 2;		/* 2 is the smallest prime to search for	*/
	while (item <= num) 
		if (num % item != 0)
			item++;					/* make item a larger factor*/
		else {
			Push(item, stack_ptr);	/* item is a factor			*/
			num /= item;
		}
	while (!Empty(stack_ptr)) {
		Pop(&item, stack_ptr);
		printf("%d\n", item);
	}
}
