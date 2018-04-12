/* Split: split a linked list in two at node n				*/
void Split(int *n, int next[])
{
	int tmp;

	tmp = next[*n];
	next[*n] = -1;
	*n = tmp;
}
