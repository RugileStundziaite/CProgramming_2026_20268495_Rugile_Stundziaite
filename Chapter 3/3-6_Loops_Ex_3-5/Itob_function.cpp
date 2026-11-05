// Rugile Stundziaite 20268495
// 
// EX 3-5
// Write the function itob(n, s, b) that converts the integer n 
// into a base b character representation in the string s. 
// In particular, itob(n, s, 16) formats n as a hexadecimal integer in s.


#include <stdio.h>
#include <string.h>

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

void itob(int n, char s[], int b)
{
    int i = 0;

    do
    {
        int digit = n % b;

        if (digit < 10)
            s[i++] = digit + '0';
        else
            s[i++] = digit - 10 + 'A';

    } while ((n /= b) > 0);

    s[i] = '\0';

    reverse(s);
}

int main(void)
{
    char s[50];

    itob(255, s, 16);

    printf("%s\n", s);

    return 0;
}