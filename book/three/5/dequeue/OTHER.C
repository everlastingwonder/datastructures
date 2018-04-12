#include	"general.h"
#include	"deque.h"

/* Size: return current number of items in the queue		*/
int Size(Deque_type *deque_ptr)
{
	int i;
	int count = 1;

	if (deque_ptr->rear <= -1)
		return 0;
	for (i = deque_ptr->front; i != deque_ptr->rear; 
									i = (i + 1) % MAXDEQUE)
		count++;
	return count;
}

/* Empty: return non-zero if the queue is empty				*/
Boolean_type Empty(Deque_type *deque_ptr)
{
	return deque_ptr->rear <= -1; 
}

/* Full: return non-zero if the queue if full				*/
Boolean_type Full(Deque_type *deque_ptr)
{
	if ((deque_ptr->rear == deque_ptr->front - 1 && 
		deque_ptr->rear > -1) ||
		(deque_ptr->rear == MAXDEQUE - 1 && 
		deque_ptr->front == 0))
		return TRUE;
	else
		return FALSE;
}

/* Error: print error message and continue the program		*/
void Error(char *s)
{
	fprintf(stderr, "%s\n", s);
}
