 
#include "general.h"
#include "lifedef.h"

 /* Copy: copies the contents of one list to another.    */
void Copy(List_type *to, List_type *from)
{
     int i;

     for (i = 0; i < from->count; i++)
          to->entry[i] = from->entry[i];
     to->count = from->count;
     from->count = 0;   /* Clear the copied list.   */
}
