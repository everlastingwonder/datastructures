#include	"general.h"

/* Bounds: determine maximum and minimum values for x and y	*/
void Bounds(FILE *fp, double *xmax, double *xmin,
			double *ymax, double *ymin)
{
	double x, y;

	if (fscanf(fp, "%lf %lf", &x, &y) != EOF) {
		*xmax = *xmin = x;
		*ymax = *ymin = y;
	}
/*\progbreak*/
	while (fscanf(fp, "%lf %lf", &x, &y) != EOF) {
		if (x < *xmin)
			*xmin = x;
/*\progbreak*/
		if (x > *xmax)
			*xmax = x;
/*\progbreak*/
		if (y < *ymin)
			*ymin = y;
/*\progbreak*/
		if (y > *ymax)
			*ymax = y;
	}
}
