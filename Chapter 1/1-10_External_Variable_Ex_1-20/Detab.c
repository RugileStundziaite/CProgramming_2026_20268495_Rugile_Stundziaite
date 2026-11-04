// Rugile Stundziaite 20268495
// 
// EX 1-20
// Write a program detab that replaces tabs in the input 
// with the proper umber of blanks to space to the next tab stop. 
// Assume a fixed set of tab stops, say every n columns. 
// Should n be a variable or a symbolic parameter?

#include <stdio.h>

#define TABSTOP 8

int main()
{
    int c;
    int pos = 0;
    int spaces;
    int i;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            spaces = TABSTOP - (pos % TABSTOP);

            for (i = 0; i < spaces; i++)
            {
                putchar(' ');
                ++pos;
            }
        }
        else
        {
            putchar(c);

            if (c == '\n')
                pos = 0;
            else
                ++pos;
        }
    }

    return 0;
}
