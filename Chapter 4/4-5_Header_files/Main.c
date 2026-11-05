// Rugile Stundziaite 20268495
// 4.5 Code divided into multiple files


/**
 * A program calculate the polish notation instead of infix notation
 * Program is given the input in a single and and it print the output upon
 * getting a \n character. For e.g: 10 10 + 100 + 2 * 240
 *
 **/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100       /* max size of operand or operator*/



 /* reverse polish calculator*/
int main(void) {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error:zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
}

