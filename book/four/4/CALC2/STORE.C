#include	"general.h"		/*\delete*/
#include	"poly.h"		/*\delete*/
#include	"node.h"		/*\delete*/
#include	"stack.h"		/*\delete*/
#include	"calls.h"		/*\delete*/

extern Polynomial_type *memory[];

/* Store: store polynomial at top of stack to location		*/
void Store(Stack_type *sp, int location)
{
	Polynomial_type *p;

	if (Empty(sp))
		Error("Stack is empty");
/*\progbreak*/
	else {
		TopStack(&p, sp);
		Copy(&memory[location], p);
	}
}

/* Recall: extract a copy of a polynomial at location		*/
void Recall(Stack_type *sp, int location)
{
	Polynomial_type *p;
	
	if (Full(sp))
		Error("Stack is full");
/*\progbreak*/
	else {
		Copy(&p, memory[location]);
		Push(p, sp);
	}
}

/* Clear: erase polynomial at memory[location]				*/
void Clear(int location)
{
	Erase(memory[location]);
	memory[location] = NULL;
}

/* Copy: copy polynomial q to polynomial p					*/
void Copy(Polynomial_type **p, Polynomial_type *q)
{
	Polynomial_type *r, *t;

	if (!q)
		*p = NULL;
/*\progbreak*/
	else {
		r = t = MakeTerm(q->coef, q->exp); 
		for (q = q->next; q; q = q->next) 
			r = InsertTerm(q->coef, q->exp, r);
/*\progbreak*/
		r->next = NULL;
		*p = t->next;
		free(t);
	}
}
