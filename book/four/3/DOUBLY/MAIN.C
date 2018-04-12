#include	"general.h"
#include	"node.h"
#include	"calls.h"

/* test Traverse and Visit functions			*/
void main(void)
{
	Node_type *p, *q;
	Node_type *front = NULL;
	Node_type *rear = NULL;

	front = rear = MakeNode((Item_type) 'd');
	p = MakeNode((Item_type) 'c');
	InsertNodeBefore(front, p);
	front = p;
	p = MakeNode((Item_type) 'b');
	InsertNodeBefore(front, p);
	front = p;
	p = MakeNode((Item_type) 'a');
	InsertNodeBefore(front, p);
	front = p;
	printf("\nAdded nodes before p, expecting abcd, received:\n");
	Traverse(front, Visit);
	q = p = MakeNode((Item_type) 'l');
	InsertNodeAfter(front, p);
	p = MakeNode((Item_type) 'k');
	InsertNodeAfter(rear, p);
	p = MakeNode((Item_type) 'm');
	InsertNodeAfter(rear, p);
	printf("\nAdded nodes after p, expecting albcdmk, received:\n");
	Traverse(front, Visit);
	Delete(q);
	printf("\nDeleted node l, expecting abcdmk, received:\n");
	Traverse(front, Visit);
	p = front;
	front = front->next;
	Delete(p);
	printf("\nDeleted node a, expecting bcdmk, received:\n");
	Traverse(front, Visit);
}
