double Mean(double *, int);

/* Variance:  calculate the variance for n numbers in v[]	*/
double Variance(double v[], int n)
{
	int    i;
	double temp;
	double sum_squares = 0.;

	for (i = 0; i < n; i++)
		sum_squares += v[i] * v[i];
	temp = Mean(v, n);
	return sum_squares / n - temp * temp;
}
