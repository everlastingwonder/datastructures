#include	"queue.h"		/*\delete*/

/* Traverse: traverse the list visiting one node at a time	*/
void Traverse(Queue_type *queue_ptr, void (*Visit)(Node_type *))
{
	Node_type *p;

	if (queue_ptr->rear)
		for (p = queue_ptr->rear->next; ; p = p->next) {
			(*Visit)(p);
			if (p == queue_ptr->rear)
				break;		/* last entry in the queue		*/
		}
}
