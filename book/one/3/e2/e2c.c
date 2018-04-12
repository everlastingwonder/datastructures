/* Swap: swap integer first with second		*/
void Swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
