#include	<math.h>

#define	TOLERANCE	0.00001

/* CubeRoot:  find cube root of x with NEWTON method		*/
double CubeRoot(double x)
{
     double y, z;

     y = z = x;
     if (x != 0.0) 
          do {
               z = (y + y + x / (y * y)) / 3.0;
			   y = z;
          } while (fabs(z * z * z - x) > TOLERANCE);
     return z;
}
