// Rugile Stundziaite 20268495
//
// EX 2-7
// Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 
// 1 changed into 0 and vice versa), leaving the others unchanged

#include <stdio.h>

int main(void)
{
    printf("%u\n", invert(255, 4, 3));
    return 0;
}


unsigned invert(unsigned x, int p, int n)
{
    unsigned mask;

    mask = ~(~0 << n);

    return x ^ (mask << (p + 1 - n));
}