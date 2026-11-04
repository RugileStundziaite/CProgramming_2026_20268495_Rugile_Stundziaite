
// getch.c


#include <stdio.h>
#define BUFSIZE 100


//char buf[BUFSIZE];          /* buffer for ungetch*/
int buf = EOF;                   /* next free position in buf*/



/*push character back on input*/
void ungetch(int c)
{
    if (buf != EOF)
        printf("ungetch: buffer full\n");
    else
        buf = c;
}
/*get a (possibly pushed back) character*/
int getch(void)
{
    int c;

    if (buf != EOF)
    {
        c = buf;
        buf = EOF;
        return c;
    }

    return getchar();
}

void ungets(char s[])
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    while (i > 0)
        ungetch(s[--i]);
}