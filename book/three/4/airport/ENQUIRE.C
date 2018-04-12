 #include  "general.h" 
 /* Enquire:  TRUE if the user wants to change values.		*/ 
 Boolean_type Enquire(void) 
 { 
      int  c; 
      do { 
           printf("Continue (y,n)?"); 
           while ((c = getchar()) == '\n') 
                ;				/* ignore new line char. 	*/ 
      } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N'); 
      if (c == 'y' || c == 'Y') 
           return TRUE; 
      else 
           return FALSE; 
 } 
