// Rugile Stundziaite 20268495
// 
// EX 1-17
// Write a program to print all input lines that are longer than 80 characters


#include <stdio.h>

#define MAXLINE 1000

int mgetline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = mgetline(line, MAXLINE)) > 0)
    {
        if (len > 80)
            printf("%s", line);
    }

    return 0;
}

int mgetline(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 &&
        (c = getchar()) != EOF &&
        c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}


