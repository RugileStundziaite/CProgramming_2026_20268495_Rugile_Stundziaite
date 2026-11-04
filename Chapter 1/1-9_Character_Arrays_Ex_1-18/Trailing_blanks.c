// Rugile Stundziaite 20268495
// 
// EX 1-18
// Write a program to remove trailing blanks and tabs from
// each line of input, and to delete entirely blank lines




#include <stdio.h>

#define MAXLINE 1000

int mgetline(char line[], int maxline);

int main()
{
    int len, i;
    char line[MAXLINE];

    while ((len = mgetline(line, MAXLINE)) > 0)
    {
        i = len - 1;

        if (line[i] == '\n')
            --i;

        while (i >= 0 &&
            (line[i] == ' ' || line[i] == '\t'))
            --i;

        if (i >= 0)
        {
            line[i + 1] = '\n';
            line[i + 2] = '\0';
            printf("%s", line);
        }
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

