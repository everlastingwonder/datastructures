 #include	"general.h"		 
 #include	"poly.h"	 
 #include	"node.h" 
 #include	"stack.h"		 
 /* Erase: free up the space allocated for a polynomial.		*/ 
 void Erase(Polynomial_type *p) 
 { 
 	Polynomial_type *tmp; 
 	while (p) { 
 		tmp = p; 
 		p = p->next; 
 		free(tmp); 
 	} 
 } 
