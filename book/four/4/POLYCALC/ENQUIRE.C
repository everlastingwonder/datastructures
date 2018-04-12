#include  "general.h"		/*\delete*/

/* Enquire:  TRUE if the user wants to continue execution	*/
Boolean_type Enquire(void)
{
     int  c;

     do {
          printf("Continue (y,n)?\n");
          while ((c = getchar()) == '\n')
               ;			/* ignore new line character	*/
     } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
/*\progbreak*/
     if (c == 'y' || c == 'Y')
          return TRUE;
     else
          return FALSE;
}
