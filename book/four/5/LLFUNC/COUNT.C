/* Count: count the number of nodes in a linked list		*/
int Count(int head, int next[])
{
	int i;
	int n = 0;

	for (i = head; i != -1; i = next[i])
		n++;
	return n;
}
