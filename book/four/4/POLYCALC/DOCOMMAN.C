#include	"poly.h"
#include	"node.h"
#include	"stack.h"
#include	"calls.h"		/*\delete*/

/* DoCommand: do command cmd for polynomials				*/
void DoCommand(char cmd, Stack_type *sp)
{
	Item_type item;
	Polynomial_type *p, *q;

	switch(cmd) {
	case '?':	/* read polynomial and push it onto stack	*/
		Push(ReadPolynomial(), sp);
		break;
/*\progbreak*/
	case '=':	/* write polynomial on the top of the stack	*/
		TopStack(&item, sp);
		WritePolynomial(item);
		break;
	case '+':	/* add top two polynomials and push answer	*/
		Pop(&p, sp);
		Pop(&q, sp);
		Add(p, q, sp);					/* p + q			*/
		break;
/*\progbreak*/
	case '-':	/* subtract two polynomials and push answer	*/
		Pop(&p, sp);
		Pop(&q, sp);
		Subtract(p, q, sp);				/* q - p			*/
		break;
	case '*':	/* multiply two polynomials and push answer	*/
		Pop(&p, sp);
		Pop(&q, sp);
		Multiply(p, q, sp);				/* p * q			*/
		break;
/*\progbreak*/
	case '/':	/* divide two polynomials and push answer	*/
		Pop(&p, sp);
		Pop(&q, sp);
		Divide(p, q, sp);				/* q / p			*/
		break;
	}
}
