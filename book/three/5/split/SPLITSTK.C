#include	"deque.h"

/* SplitStack: split a stack - move items from ap to bp		*/
void SplitStack(Stack_type *ap, Stack_type *bp)
{
	int i, nm;

	nm = (ap->top - bp->top + 2) / 2;
	for (i = bp->top-1; i >= 0; i--)	/* make room in bp	*/
		bp->entry[i+nm] = bp->entry[i];
	for (i = 0; i < nm; i++)			/* move bottom ap	*/
		bp->entry[nm-i-1] = ap->entry[i];
	for (i = nm; i < ap->top; i++)		/* move ap stk down	*/
		ap->entry[i-nm] = ap->entry[i];
	ap->top -= nm;
	bp->top += nm;
}
