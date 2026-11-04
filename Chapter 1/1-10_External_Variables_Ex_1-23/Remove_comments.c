// Rugile Stundziaite 20268495 
// 
// EX 1-23
// Write aprogram to remove all comments from a C program. 
// Don't forget to handle quoted strings and character constants properly. 
// C comments do not nest.


#include <stdio.h>

int main()
{
    int c, prev;

    prev = getchar();

    while ((c = getchar()) != EOF)
    {
        if (prev == '/' && c == '*')
        {
            while ((prev = getchar()) != EOF)
            {
                c = getchar();

                if (prev == '*' && c == '/')
                    break;
            }

            prev = getchar();
        }
        else
        {
            putchar(prev);
            prev = c;
        }
    }

    return 0;
}

