// Rugile Stundziaite 20268495
// 
// EX 2-3
// Write the function htoi(s), which converts a string of hexa-decimal digits (including an 
// optional 0x or 0X) into its equivalent integer value.The allowable digits are 0 through 9, an
// through f, and A through F.


#include <stdio.h>

int htoi(char s[]);

int main()
{
    printf("htoi('84ada') = %d\n", htoi("84ada"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));

    return 0;
}

int htoi(char s[])
{
    int i = 0;
    int n = 0;
    int digit;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            digit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            digit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            digit = s[i] - 'A' + 10;
        else
            break;

        n = 16 * n + digit;
        ++i;
    }

    return n;
}