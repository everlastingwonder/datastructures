 #include	"general.h"		 
 #include	"poly.h"	 
 #include	"node.h" 
 #include	"stack.h"		 
 #include	"calls.h"	 
 /* Subtract: subtract two polynomials and push the answer	*/ 
 void Subtract(Polynomial_type *p, Polynomial_type *q, Stack_type *sp) 
 { 
 	double diff; 
 	Polynomial_type *ptmp = p; 
 	Polynomial_type *qtmp = q; 
 	Polynomial_type *result, *tail; 
 	tail = result = MakeTerm(0.0, 0); 
 	while(p && q)  
 		if (p->exp == q->exp) {		/* subtract coeficients	*/ 
 			if ((diff = q->coef - p->coef) != 0.0) 
 				tail = InsertTerm(diff, p->exp, tail); 
 			p = p->next; 
 			q = q->next; 
 		} else if (p->exp > q->exp) {	/* copy p to result	*/ 
 			tail = InsertTerm(-p->coef, p->exp, tail); 
 			p = p->next; 
 		} else {						/* copy q to result	*/ 
 			tail = InsertTerm(q->coef, q->exp, tail); 
 			q = q->next; 
 		} 
 	/* One or both of the summands have been exhausted.		*/ 
 	/* At most one of the following loops will be executed.	*/ 
 	for ( ; p; p = p->next) 
 		tail = InsertTerm(-p->coef, p->exp, tail); 
 	for ( ; q; q = q->next) 
 		tail = InsertTerm(q->coef, q->exp, tail); 
 	tail->next = NULL;				/* terminate polynomial */	 
 	Push(result->next, sp); 
 	free(result);						/* free dummy head	*/ 
 	Erase(ptmp);		 
 	Erase(qtmp); 
 } 
