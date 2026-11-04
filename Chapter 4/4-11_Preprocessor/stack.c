
// stack.c

#include <stdio.h>
#include "calc.h"

#define MAXVAL 100      /* maximu depth of val stack*/

int sp = 0;                     /* stack pointer : defined outside of funcion*/
/* main does not refer to the stack position. ie.,
the representation can be hidden*/

double val[MAXVAL];         /* value stack*/

/* push : push f onto  value stack */
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error:stack full, cant push %g\n", f);
}

/* pop and return top value from stack */
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void printtop(void)
{
    if (sp > 0)
        printf("Top = %.8g\n", val[sp - 1]);
    else
        printf("Stack empty\n");
}

void duplicate(void)
{
    if (sp > 0)
        push(val[sp - 1]);
}

void swap(void)
{
    double temp;

    if (sp >= 2)
    {
        temp = val[sp - 1];
        val[sp - 1] = val[sp - 2];
        val[sp - 2] = temp;
    }
}

void clearstack(void)
{
    sp = 0;
}
