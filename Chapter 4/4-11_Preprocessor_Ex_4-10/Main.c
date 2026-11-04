// Main file
// Rugile Stundziaite 20268495
// 4.11 
// All exercises from 4-3 to 4-9


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
#include <math.h>
#include <ctype.h>

#define MAXOP 100       /* max size of operand or operator*/

double vars[26] = { 0.0 };
double last = 0.0;
int var = -1;

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
            last = pop();
            printf("\t%.8g\n", last);
            break;
        case '%':
            op2 = pop();
            if (op2 != 0.0)
                push((int)pop() % (int)op2);
            else
                printf("error: zero divisor\n");
            break;
        case '?':
            printtop();
            break;

        case 'd':
            duplicate();
            break;

        case 's':
            swap();
            break;

        case 'c':
            clearstack();
            break;
        case 'i':
            push(sin(pop()));
            break;
        case 'e':
            push(exp(pop()));
            break;
        case 'p':
            op2 = pop();
            push(pow(pop(), op2));
            break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            var = type - 'A';
            push(vars[var]);
            break;
        case '=':
            if (var >= 0)
            {
                vars[var] = pop();
                push(vars[var]);
            }
            break;
        case 'v':
            push(last);
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
}

