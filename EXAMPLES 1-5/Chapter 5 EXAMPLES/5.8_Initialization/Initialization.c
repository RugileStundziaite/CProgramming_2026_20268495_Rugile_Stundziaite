// Rugile Stundziiate 20268495

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* month_name(int n);

// month
char *month_name(int n)
{
    static char* name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main(void)
{
    char *s;
    int n;

    printf("Input number (1-12)\n");
    scanf("%d", &n);

    s = month_name(n);

    printf("Month name is : %s\n", s);

    // printf("Month name is : %s\n", month_name(n));

    return 0;
}