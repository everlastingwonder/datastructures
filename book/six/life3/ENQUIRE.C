 
#include "general.h"
#include  "lifedef.h"

int Enquire(void)       /* TRUE if user wants to continue execution  */
{
     int  c;

     do {
          printf("Continue (y,n)?\n");
          while ((c = getchar()) == '\n')
               ;                        /* ignore new line char. */
     } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
     if (c == 'y' || c == 'Y')
          return TRUE;
     else
          return FALSE;
}
