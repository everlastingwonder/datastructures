#include	"general.h"
#include	"calls.h"

/* read coordinates from a file and plot coordinate pairs	*/
void main(void)
{
	FILE *fp;
	double xmax, xmin;				/* bounds for x values	*/
	double ymax, ymin;				/* bounds for y values	*/
	double x, y;					/* x, y values to plot	*/

	if ((fp = fopen("points", "r")) == NULL) {
		fprintf(stderr, "Cannot open points file\n");
		exit(1);
	}
/*\progbreak*/
	Bounds(fp, &xmax, &xmin, &ymax, &ymin);
	DrawAxes(xmax, xmin, ymax, ymin);
/*\progbreak*/
	fseek(fp, 0L, SEEK_SET);		/* reset beginning file	*/
	while (fscanf(fp, "%lf %lf", &x, &y) != EOF)
		Plot(x, y);
}
