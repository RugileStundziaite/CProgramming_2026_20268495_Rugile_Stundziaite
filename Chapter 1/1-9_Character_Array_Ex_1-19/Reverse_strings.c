// Rugile Stundziaite 20268495
// 
// EX 1-19
// Write a function reverse(s) that reverses the character strings. 
// Use it to write a program that reverses its input a line at a time

#include <stdio.h>

#define MAXLINE 1000

int mgetline(char line[], int maxline);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];

    while (mgetline(line, MAXLINE) > 0)
    {
        reverse(line);
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
// reverse function
void reverse(char s[])
{
    int i, j;
    char temp;

    for (j = 0; s[j] != '\0'; ++j)
        ;

    if (s[j - 1] == '\n')
        --j;

    for (i = 0, --j; i < j; ++i, --j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}






