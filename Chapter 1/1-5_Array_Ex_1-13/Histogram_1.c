// Rugile Stundziaite 20268495
//
// EX 1-13
// Write a program to print a histogram of the lengths of words in its input.


#include <stdio.h>

int main()
{
    int c;
    int length = 0;
    int i;

    while ((c = getchar()) != '\n')
    {
        if (c == ' ' || c == '\t')
        {
            for (i = 0; i < length; i++)
                printf("*");

            printf("\n");
            length = 0;
        }
        else
        {
            ++length;
        }
    }


    if (length > 0)
    {
        for (i = 0; i < length; i++)
            printf("*");

        printf("\n");
    }

    return 0;
}

