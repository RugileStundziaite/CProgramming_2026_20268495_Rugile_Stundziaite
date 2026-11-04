// Rugile Stundziaite 20268495
// 
// EX 1-8
// Write a program to count blanks, tabs, and newlines.



#include <stdio.h>

int main()
{
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')       // count blanks
            ++blanks;

        if (c == '\t')      // count tabs
            ++tabs;

        if (c == '\n')      // count newlines
            ++newlines;
    }

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}