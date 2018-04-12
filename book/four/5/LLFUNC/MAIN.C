#include	"general.h"
#include	"list.h"
#include	"calls.h"

char info[MAX*2] = { 'a', 'x', 'b', 'c', 'x',
				      'x', 'x', 'd', 'x', 'e',
					  'r', 'x', 't'           };
int next[MAX*2] = { 2, -1,  3,  7, -1,
				   -1, -1,  9, -1, -1,
				   12, -1, -1         };

void main()
{
	int first = 0;
	int n = 9;

	printf("Count should be 5, received %d\n", Count(0, next));
	printf("Count should be 2, received %d\n", Count(10, next));
	printf("\ninfo1 (abcde) received:\n");
	Traverse(0, next, Visit);
	printf("\ninfo2 (rt) received:\n");
	Traverse(10, next, Visit);
	Concatenate(&first, 10, next);
	printf("\ninfo1 (abcdert) received:\n");
	Traverse(0, next, Visit);
	Split(&n, next);
	printf("\ninfo1 - after split (abcde) received:\n");
	Traverse(0, next, Visit);
	printf("\ninfo2 - after split (rt) received:\n");
	Traverse(10, next, Visit);
	printf("\nReverse info1 after the split (edcba) received:\n");
	Reverse(&first, next);
	Traverse(first, next, Visit);
}
