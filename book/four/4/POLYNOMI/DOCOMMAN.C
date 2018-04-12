 
#include        "poly.h"
#include        "node.h"
#include        "stack.h"
#include        "calls.h"

/* DoCommand: do command cmd for polynomials.                         */
void DoCommand(char cmd, Stack_type *sp)
{
        Item_type item;
        Polynomial_type *p, *q;

        switch(cmd) {
        case '?':       /* Read polynomial and push it onto stack.      */
                Push(ReadPolynomial(), sp);
                break;
 
        case '=':       /* Write polynomial on the top of the stack.    */
                TopStack(&item, sp);
                WritePolynomial(item);
                break;
        case '+':       /* Add top two polynomials and push answer.     */
                Pop(&p, sp);
                Pop(&q, sp);
                Add(p, q, sp);                                  /* p + q                    */
                break;
 
        case '-':       /* Subtract two polynomials and push answer.    */
                Pop(&p, sp);
                Pop(&q, sp);
                Subtract(p, q, sp);                             /* q - p                    */
                break;
        case '*':       /* Multiply two polynomials and push answer.    */
                Pop(&p, sp);
                Pop(&q, sp);
                Multiply(p, q, sp);                             /* p * q                    */
                break;
 
        case '/':       /* Divide two polynomials and push answer.      */
                Pop(&p, sp);
                Pop(&q, sp);
                Divide(p, q, sp);                               /* q / p                    */
                break;
        }
}
