#include	<math.h>

double Variance(double *, int);
 
/* StandardDeviation:  calculate standard deviation of v[]	*/
double StandardDeviation(double v[], int n)
{
     return sqrt(Variance(v, n));
}
