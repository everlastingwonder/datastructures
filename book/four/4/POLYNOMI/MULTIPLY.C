 #include	"general.h"		 
 #include	"poly.h"	 
 #include	"node.h" 
 #include	"stack.h"		 
 #include	"calls.h"	 
 /* Multiply: multiply two polynomials and push the answer. 	*/ 
 void Multiply(Polynomial_type *p, Polynomial_type *q, Stack_type *sp) 
 { 
 	Polynomial_type *tmp; 
 	Polynomial_type *result = NULL; 
 	for ( ; p; p = p->next) {	/* multiply q by each term of p*/ 
 		tmp = MonomialMultiply(q, p); 
 		Add(result, tmp, sp); 
 		Pop(&result, sp); 
 	} 
 	Push(result, sp); 
 	Erase(p); 
 	Erase(q); 
 } 
