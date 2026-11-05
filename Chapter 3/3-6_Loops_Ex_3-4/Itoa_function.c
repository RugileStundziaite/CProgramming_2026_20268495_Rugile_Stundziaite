// Rugile Stundziaite 20268495
//
// EX 3-4
// In a two's complement number representation, our version of 
// itoa does not handle the largest negative number, that is, 
// the value of n equal to -(2wordsize-1). Explain why not. 
// Modify it to print that value correctly, regardless of the machine on which it runs.


#include <stdio.h>
#include <string.h>
#include <limits.h>

void reverse(char s[]);
void itoa(int n, char s[]);

int main(void)
{
    char s[20];

    itoa(INT_MIN, s);

    printf("%s\n", s);

    return 0;
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[])
{
    int i, sign;

    sign = n;
    i = 0;

    do
    {
        int digit = n % 10;

        if (digit < 0)
            digit = -digit;

        s[i++] = digit + '0';

    } while ((n /= 10) != 0);

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';

    reverse(s);
}

