 #include	"general.h"		 
 #include	"poly.h"	 
 /* WritePolynomial: write a polynomial to standard output.	*/ 
 void WritePolynomial(Polynomial_type *p) 
 { 
 	if (!p)					/* Polynomial is an empty list.	*/ 
 		printf("zero polynomial"); 
 	else while (p) { 
 		printf("%5.2lfx^%1d", p->coef, p->exp); 
 		p = p->next; 
 		if (p) 
 			printf("+"); 
 		else 
 			printf(""); 
 	} 
 } 
