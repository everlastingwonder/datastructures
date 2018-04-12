 #include	"general.h"		 
 #include	"poly.h"	 
 #include	"node.h" 
 #include	"stack.h"	 
 #include	"calls.h" 
 /* Add: add two polynomials and push the answer onto stack.	*/ 
 void Add(Polynomial_type *p, Polynomial_type *q, Stack_type *sp) 
 { 
 	double sum; 
 	Polynomial_type *ptmp = p; 
 	Polynomial_type *qtmp = q; 
 	Polynomial_type *result, *tail; 
 	tail = result = MakeTerm(0.0, 0); 
 	while(p && q)  
 		if (p->exp == q->exp) {			/* Add coefficients.	*/ 
 			if ((sum = p->coef + q->coef) != 0.0) 
 				tail = InsertTerm(sum, p->exp, tail); 
 			p = p->next; 
 			q = q->next; 
 		} else if (p->exp > q->exp) {	/* Copy p to result.	*/ 
 			tail = InsertTerm(p->coef, p->exp, tail); 
 			p = p->next; 
 		} else {						/* Copy q to result.	*/ 
 			tail = InsertTerm(q->coef, q->exp, tail); 
 			q = q->next; 
 		} 
 	/* One or both of the summands has been exhausted.		*/ 
 	/* At most one of the following loops will be executed.	*/ 
 	for ( ; p; p = p->next) 
 		tail = InsertTerm(p->coef, p->exp, tail); 
 	for ( ; q; q = q->next) 
 		tail = InsertTerm(q->coef, q->exp, tail); 
 	tail->next = NULL;				/* Terminate polynomial.	*/	 
 	Push(result->next, sp); 
 	free(result);					/* Free dummy head.		*/ 
 	Erase(ptmp);					/* Erase summand.		*/ 
 	Erase(qtmp); 
 } 
