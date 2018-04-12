#include	"general.h"		/*\delete*/
#include	"deque.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* AddNodeTail: add a new node to the tail of the deque		*/
void AddNodeTail(Item_type item, Deque_type *deque_ptr)
{
	AddNodeHead(item, deque_ptr);
	deque_ptr->rear = deque_ptr->rear->next;
}
