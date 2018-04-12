/* Median: find the middle value of three parameters	*/
int Median(int a, int b, int c)
{
/*\progbreak*/
	if (a > b)
		if (a > c)
			if (c > b)
				return c;
			else
				return b;
		else
			return a;
/*\progbreak*/
	else if (c > a)
		if (c > b)
			return b;
		else
			return c;
/*\progbreak*/
	else
		return a;
}
