// Rugile Stundziaite 20268495
// 
// EX 2-6
// Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set to the 
// right most n bits of y, leaving the other bits unchanged


#include <stdio.h>

int main(void)
{
    printf("%u\n", setbits(255, 4, 3, 5));

    return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask;

    mask = ~(~0 << n);

    return (x & ~(mask << (p + 1 - n)))
        | ((y & mask) << (p + 1 - n));
}