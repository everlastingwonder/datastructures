/* Reverse: reverse a linked list while traversing it once	*/
void Reverse(int *head, int next[])
{
	int p, q;

	if (*head != -1)
		if (next[p = *head] != -1) {
			q = next[p];
			next[p] = -1;
			do {
				*head = q;
				q = next[q];
				next[*head] = p;
				p = *head;
			} while (q != -1);
		}
}
