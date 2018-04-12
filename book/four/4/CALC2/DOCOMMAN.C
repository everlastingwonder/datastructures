#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

Polynomial_type *memory[3];	/* array of ptrs to polynomials	*/

/* DoCommand: do command cmd for polynomials				*/
void DoCommand(char cmd, Stack_type *sp)
{
	Polynomial_type *p, *q;

	switch(cmd) {
	case '?':	/* read polynomial and push it onto stack	*/
		Push(ReadPolynomial(), sp);
		break;
/*\progbreak*/
	case '=':	/* write polynomial on the top of the stack	*/
		TopStack(&p, sp);
		WritePolynomial(p);
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
	case 'a':	/* add all polynomials on the stack			*/
		Summation(sp);
		break;
	case 'c':	/* clear polynomial at location 0			*/
		Clear(0);
		break;
/*\progbreak*/
	case 'd':	/* calculate derivative of a polynomial		*/
		Pop(&p, sp);
		WritePolynomial(Derivative(p));
		break;
	case 'e':	/* evaluate a polynomial at value 2			*/
		Pop(&p, sp);
		printf("total: %lf\n", 
				Evaluate(p, (double) 2.0));
		break;
/*\progbreak*/
	case 'i':	/* interchange top two polynomials			*/
		TopStack(&p, sp);
		WritePolynomial(p);
		Switch(sp);
		TopStack(&p, sp);
		WritePolynomial(p);
		break;
	case 'k':	/* kill top of the stack					*/
		TopStack(&p, sp);
		WritePolynomial(p);
		KillTop(sp);
		TopStack(&p, sp);
		WritePolynomial(p);
		break;
/*\progbreak*/
	case 'r':	/* recall polynomial from location 0		*/
		Recall(sp, 0);
		break;
	case 's':	/* store polynomial at location 0			*/
		Store(sp, 0);
		WritePolynomial(memory[0]);
		break;
	}
}
