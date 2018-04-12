int E4c(int x, int y, int z)
{
	int c;

	if (x < z)
		if (x < y)
			if (y < z)
				c = 1;
			else
				c = 2;
		else
			c = 3;
/*\progbreak*/
	else if (x < y) 
		c = 4;
/*\progbreak*/
	else if (y < z)
		c = 5;
/*\progbreak*/
	else
		c = 6;

	return c;
}
