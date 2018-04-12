/* Concatenate: concatenate two linked list					*/
void Concatenate(int *first, int second, int next[])
{
	int i;

	if (*first == -1)
		*first = second;
	else {
		for (i = *first; next[i] != -1; i = next[i])
			;
		next[i] = second;
	}
}
