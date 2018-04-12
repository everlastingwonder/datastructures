#include	"scroll.h"

/* Initialize: initialize scroll								*/
void Initialize(Scroll_type *scroll_ptr)
{
	scroll_ptr->front = 0;
	scroll_ptr->rear  = -1;
}
