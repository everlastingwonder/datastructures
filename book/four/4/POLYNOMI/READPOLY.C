 #include	<limits.h>		 
 #include	"general.h"	 
 #include	"poly.h" 
 #include	"calls.h"		 
 /* ReadPolynomial: read a polynomial and return its pointer.	*/ 
 Polynomial_type *ReadPolynomial(void) 
 { 
 	double coef; 
 	int exp, lastexp; 
 	Polynomial_type *result, *tail; 
 	printf("Enter coefficients and exponents for the polynomial." 
 		   "Exponents must be in descending order." 
 		   "Enter coefficient or exponent 0 to terminate."); 
 	lastexp = INT_MAX; 
 	tail = result = MakeTerm(0.0, 0);	/* dummy head		*/ 
 	while(1) { 
 		printf("coefficient? "); 
 		scanf("%lf", &coef); 
 		if (coef == 0.0) 
 			break; 
 		printf("exponent? "); 
 		scanf("%d", &exp); 
 		if (exp >= lastexp || exp < 0) { 
 			printf("Bad exponent. Polynomial is terminated " 
 				   "without its last term."); 
 			break; 
 		}  
 		tail = InsertTerm(coef, exp, tail); 
 		if (exp == 0) 
 			break; 
 		lastexp = exp; 
 	}	 
 	tail->next = NULL;			/* Terminate the polynomial.	*/ 
 	tail = result;				/* Prepare to dispose head.	*/ 
 	result = result->next;		/* Advance to first term.	*/ 
 	free(tail);					/* Free dummy head.			*/ 
 	return result; 
 } 
