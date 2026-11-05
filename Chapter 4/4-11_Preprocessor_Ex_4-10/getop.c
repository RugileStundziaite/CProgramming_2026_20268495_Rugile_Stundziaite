// getop.c


#include <ctype.h>
#include <stdio.h>
#include "calc.h"

#define MAXLINE 100

int pos = 0;
char line[MAXLINE];


/* getop : get next operator or numeric operand*/
int getop(char s[])
{
    int i = 0;

    if (line[pos] == '\0')
    {
        if (fgets(line, MAXLINE, stdin) == NULL)
            return EOF;

        pos = 0;
    }

    while (line[pos] == ' ' || line[pos] == '\t')
        pos++;

    s[0] = line[pos];
    s[1] = '\0';

    if (!isdigit(line[pos]) &&
        line[pos] != '.' &&
        line[pos] != '-')
    {
        return line[pos++];
    }

    i = 0;

    if (line[pos] == '-')
        s[i++] = line[pos++];

    while (isdigit(line[pos]))
        s[i++] = line[pos++];

    if (line[pos] == '.')
        s[i++] = line[pos++];

    while (isdigit(line[pos]))
        s[i++] = line[pos++];

    s[i] = '\0';

    return NUMBER;
}