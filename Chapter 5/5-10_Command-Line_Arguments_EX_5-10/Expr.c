// Rugile Stundziaite 20268495

// EX 5-10
// Write the program expr, which evaluates a reverse Polish expression from the command line, 
// where each operator or operand is a separate argument. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

// push: push value onto stack 
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full\n");
}

// pop: pop and return top value from stack 
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int main(int argc, char* argv[])
{
    double op2;

    while (--argc > 0)
    {
        argv++;

        if (strcmp(*argv, "+") == 0)
            push(pop() + pop());

        else if (strcmp(*argv, "*") == 0)
            push(pop() * pop());

        else if (strcmp(*argv, "-") == 0)
        {
            op2 = pop();
            push(pop() - op2);
        }

        else if (strcmp(*argv, "/") == 0)
        {
            op2 = pop();

            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: division by zero\n");
        }

        else
            push(atof(*argv));
    }

    printf("%.8g\n", pop());

    return 0;
}