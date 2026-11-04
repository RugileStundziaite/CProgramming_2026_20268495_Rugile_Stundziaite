// Rugile Stundziaite 20268495
// 
// EX 1-21
// Write a program entab that replaces strings of blanks 
// by the minimum number of tabs and blanks to achieve the same spacing. 
// Use the same tab stops as for detab. When either a tab or a single 
// blank would suffice tp reach a tab stop, which should be given prefference?

#include <stdio.h>

#define TABSTOP 8

int main()
{
    int c;
    int spaces = 0;
    int pos = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++spaces;
            ++pos;

            if (pos % TABSTOP == 0)
            {
                putchar('\t');
                spaces = 0;
            }
        }
        else
        {
            while (spaces > 0)
            {
                putchar(' ');
                --spaces;
            }

            putchar(c);

            if (c == '\n')
                pos = 0;
            else
                ++pos;
        }
    }

    return 0;
}
