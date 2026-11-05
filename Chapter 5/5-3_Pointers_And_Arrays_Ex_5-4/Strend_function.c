// Rugile Stundziaite 20268495
//
// 5-4
// Write the function strend(s, t), which returns 1 
// if the string t occurs at the end of string s, and 0 otherwise



#include <stdio.h>

int strend(char* s, char* t);

int main(void)
{
    printf("%d\n", strend("hello", "lo"));
    printf("%d\n", strend("hello", "hello"));
    printf("%d\n", strend("hello", "he"));
    printf("%d\n", strend("hello", "world"));

    return 0;
}

int strend(char* s, char* t)
{
    char* bs = s;
    char* bt = t;

    while (*s)
        s++;

    while (*t)
        t++;

    while (t > bt && s > bs)
    {
        if (*--s != *--t)
            return 0;
    }

    return (t == bt);
}