// Rugile Stundziaite 20268495
// 5.6
// Both examples from the second video are in this single file

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* arr_1;
    int* arr_2;

    arr_1 = (int*)malloc(sizeof(int) * 4);
    arr_2 = (int*)calloc(sizeof(int) * 4, sizeof(int) * 4);

    for (int i = 0; i < 4; i++)
    {
        printf("arr_1 = %-10d\tarr_2 = %-10d\n",
            arr_1[i], arr_2[i]);
    }

    free(arr_1);
    free(arr_2);

    return 0;
}

// -----------------------------------
// Second example
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* arr;
    int num;

    num = 3;

    arr = (char*)malloc(num);

    for (int i = 0; i < 3; i++)
    {
        arr[i] = '0' + i;
        printf("arr[%d] = %c\n", i, arr[i]);
    }

    free(arr);

    return 0;
}