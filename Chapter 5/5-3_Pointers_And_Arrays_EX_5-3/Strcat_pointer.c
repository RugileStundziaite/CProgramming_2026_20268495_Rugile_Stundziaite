// Rugile Stundziaite 20268495
//
// 5-3
// Write a pointer version of the function strcat that we 
// showed in Chapter 2: strcat(s, t) copies the string t to the other end s.

#include <stdio.h>

void strcat(char* s, char* t);

int main(void)
{
    char s[50] = "Hey ";
    char t[] = "friend!";

    strcat(s, t);

    printf("%s\n", s);

    return 0;
}

// pointer version
void strcat(char* s, char* t)
{
    while (*s != '\0')      // find end of s 
        s++;

    while ((*s++ = *t++) != '\0')   // copy t 
        ;
}