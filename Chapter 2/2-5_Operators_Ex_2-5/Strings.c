// Rugile Stundziaite 20268495
// 
// EX 2-5
//  Write the function any(s1,s2), which returns the first location in the string s1 where any 
// character from the string s2 occurs, or -1 if s1 contains no character from s2. (The standard lib.
//   Function strpbrk does the sam job but returns a pointer to the location

#include <stdio.h>

int any(char s1[], char s2[]);

int main(void)
{
    char s1[] = "hello";
    char s2[] = "xyzl";

    printf("%d\n", any(s1, s2));

    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
                return i;
        }
    }

    return -1;
}