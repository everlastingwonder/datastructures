#include	"general.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"queue.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

/* AddQueue: make a new node with item and add it to queue	*/
void AddQueue(Item_type item, Queue_type *queue_ptr)
{
	if (Full(queue_ptr))
		Error("Queue is full");
	else
		AddNode(MakeNode(item), queue_ptr);
}
