// Rugile Stundziaite 20268495
// EX 1-10
// Write a program to copy its input to its output, 
// replcaing each tab by \t, each backspace by \b, and each backlash by \\.
// This makes tabs and backspaces visible in an unambigious way.

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {

        if (c == '\t')
            printf("\\t");      // replace tabs

        else if (c == '\b')
            printf("\\b");      // replace backspace

        else if (c == '\\')
            printf("\\\\");     // replace \\

        else
            putchar(c);
    }

    return 0;
}


