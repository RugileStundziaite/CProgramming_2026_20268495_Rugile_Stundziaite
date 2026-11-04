// Rugile Stundziaite 20268495 
// 
// EX 1-14
// Write a program to print a histogram of the 
// frequences of different characters in its input.

#include <stdio.h>

int main()
{
    int c;
    int chars[128] = { 0 };

    while ((c = getchar()) != '\n')
    {
        ++chars[c];
    }

    printf("\nCharacter Frequency Histogram:\n");

    for (int i = 0; i < 128; i++)
    {
        if (chars[i] > 0)
        {
            printf("%c : ", i);

            for (int j = 0; j < chars[i]; j++)
                printf("*");

            printf("\n");
        }
    }

    return 0;
}
