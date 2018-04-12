#include    <stdio.h>
#include    "stack.h"

void push(ITEM, STACK *);
ITEM pop(STACK *);
void initialize(STACK *);
int  full(STACK *);
int  empty(STACK *);

/* revread: read one line of input and write it backwards   */
void revread(void)
{
    int c;
    STACK stack;
    STACK *sp = &stack;

    initialize(sp);         /* initialize stack to be empty */
    while ((c = getchar()) != '\n' && !full(sp))
        push((ITEM) c, sp); /* push each char onto the stack*/
    while (!empty(sp))
        putchar(pop(sp));   /* pop each char from the stack */
    putchar('\n');
}
