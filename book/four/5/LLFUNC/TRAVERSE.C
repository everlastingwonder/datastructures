#include	"list.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* Traverse: traverse link list starting at head with		*/
/*           links in the table next[]						*/
void Traverse(int head, int next[], void (*Visit)(int))
{
	int i;

	for (i = head; i != -1; i = next[i])
		(*Visit)(i);
}
