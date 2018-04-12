#include	"general.h"
#include	"defs.h"

/* Initialize: initialize streets matrix for drunk's memory	*/
void Initialize(Matrix_type streets, int maxrow, int maxcol)
{
	int i, j;

	for (i = 0; i < maxrow; i++)
		for (j = 0; j < maxcol; j++)
			streets[i][j] = FALSE;
}
