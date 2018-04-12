#include	<limits.h>
#include	"general.h"
#include	"stack.h"

/* TopThird: return third element from the top of the 		*/
/*	         stack, or INT_MAX if the stack has less		*/
/*			 than 3 elements								*/
Item_type TopThird(Stack_type *stack_ptr)
{
	int i;
	Item_type tmp[3];

	if (Size(stack_ptr) < 3)
		return INT_MAX;
/*\progbreak*/
	else {
		for (i = 0; i < 3; i++)
			Pop(&tmp[i], stack_ptr);
		for (i = 2; i >= 0; i--)
			Push(tmp[i], stack_ptr);
		return tmp[2];
	}
}
