// Rugile Stundziaite 20268495
// 
// EX 2-8 
// Write a function rightrot(x,n) that returns the value of
// the integet x rotated to the right by n bit positions


#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(void)
{
    unsigned x = 150;   /* 10010110 in binary */

    printf("Original: %u\n", x);

    x = rightrot(x, 2);

    printf("Rotated : %u\n", x);

    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    int bits;

    bits = sizeof(unsigned) * 8;

    n = n % bits;

    return (x >> n) | (x << (bits - n));
}