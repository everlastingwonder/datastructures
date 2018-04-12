int E4b(int x, int y, int z)
{
	int c;

	if (x < z) {
		if (x < y)
			if (y < z)
				c = 1;
			else
				c = 2;
		else if (y < z)
			c = 3;
/*\progbreak*/
	} else if (x < y) {
		if (x > z)
			c = 6;
/*\progbreak*/
	} else if (y < z)
		c = 7;
/*\progbreak*/
	else if (z < x)
		if (z < y)
			c = 8;

	return c;
}
