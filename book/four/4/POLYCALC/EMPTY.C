#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Empty: return non-zero if the stack is empty				*/
Boolean_type Empty(Stack_type *sp)
{
	return sp->top == NULL;
}

/* Full: always return FALSE because it is a linked stack	*/
Boolean_type Full(Stack_type *sp)
{
	return FALSE;
}
