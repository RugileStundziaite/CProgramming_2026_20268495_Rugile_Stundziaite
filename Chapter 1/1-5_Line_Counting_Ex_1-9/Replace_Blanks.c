// Rugile Stundziaite 20268495
// EX 1-9
// Write a program to copy its input 
// to its uotput, replacing each string of 
// one or more blanks by a single blank.

#include <stdio.h>

int main()
{
    int c;
    int previous_blank = 0;

    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            if (previous_blank == 0) {
                putchar(c);
                previous_blank = 1;
            }
        }
        else {
            putchar(c);
            previous_blank = 0;
        }
    }

    return 0;
}

