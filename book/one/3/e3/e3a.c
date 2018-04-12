int E4a(int x, int y, int z)
{
	int c;

	if (x < z)
		if (x < y)
			if (y < z)
				c = 1;
			else
				c = 2;
		else if (y < z)
			c = 3;
		else
			c = 4;
/*\progbreak*/
	else if (x < y)
		if (x < z)
			c = 5;
		else
			c = 6;
/*\progbreak*/
	else if (y < z)
		c = 7;
/*\progbreak*/
	else if (z < x)
		if (z < y)
			c = 8;
		else
			c = 9;
/*\progbreak*/
	else
		c = 10;

	return c;
}
