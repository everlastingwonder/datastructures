#include	<math.h>

#define	TOLERANCE	0.00001

/* Formula:  find cube root of x directly from the formula	*/
double Formula(double x)
{
     double y = x;

     if (x != 0.0)
          do {
               y = (2 * y + x / (y * y)) / 3.0;
          } while (fabs(y * y * y - x) > TOLERANCE);
     return y;
}
