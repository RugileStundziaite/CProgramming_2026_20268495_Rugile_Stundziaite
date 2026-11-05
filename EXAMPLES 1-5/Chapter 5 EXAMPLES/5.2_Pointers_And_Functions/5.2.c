// Rugile Stundziaite 20268495
// 5.2
// I combined slides 4-6, I thought it made the most sense to have them together

#include <stdio.h>

void swap(int* px, int* py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    int x = 1, y = 2, z[10];
    int* ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];

    printf("%d\n", *ip);


    printf("%d\n", x);

    swap(&x, &y);    

    printf("%d %d\n", x, y);

    return 0;
}