// Rugile Stundziaite 20268495
//
// EX 3-6
// Write a version of itoa that accepts three arguments instead of two. 
// The third argument is a minimum field width; the converted number must 
// be padded with blanks on the left if necessary to make it wide enough.


#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[], int width);

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

void itoa(int n, char s[], int width)
{
    int i = 0;
    int sign = n;

    if (n < 0)
        n = -n;

    do
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';

    while (i < width)
        s[i++] = ' ';

    s[i] = '\0';

    reverse(s);
}

int main(void)
{
    char s[20];

    itoa(458, s, 8);

    printf("'%s'\n", s);

    return 0;
}