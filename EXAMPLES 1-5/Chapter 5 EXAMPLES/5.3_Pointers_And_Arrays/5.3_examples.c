// Rugile Stundziaite 20268495
// 5.3
// Slides 8-10, put into a single file, when testing each, the others should be commented out. 
// I did not want to divide them into even more files


// -------------------------------------------------------------
// Slide 8
#include <stdio.h>

int main(void)
{
    int a[10] = { 10, 20, 30, 40, 50 };
    int* pa;
    int x;

    pa = &a[0];

    x = *pa;

    printf("x = %d\n", x);
    printf("a[1] = %d\n", *(pa + 1));

    return 0;
}

// -------------------------------------------------------------
// Slide 9
#include <stdio.h>

// strlen: return length of string s 
int str_len(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;

    return n;
}

// strcpy: copy t to s, pointer version 2
void str_copy(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}

// The two otehr versions, included just in case, commented out for easier testing
// strcpy: copy t to s, array subscript
//void strcpy(char *s, char *t)
//{
//    int i;
//    
//    i = 0;
//	while ((s[i] = t[i]) != '\0')
//		i++;
//}
//// strcpy: copy t to s, pointer version 1
//void strcopy(char *s, char *t)
//{
//    while ((*s = *t) != '\0')
//    {
//		s++;
//		t++;
//    }
//}

int main(void)
{
    char s[] = "hello world";
    char copy[100];

    printf("Length = %d\n", str_len(s));

    str_copy(copy, s);

    printf("Copy = %s\n", copy);

    return 0;
}

// -------------------------------------------------------------
// Slide 10

#include <stdio.h>

// strcmp: return <0 if s<t, 0 if s==t, >0 if s>t 
int strcmp(char *s, char *t)
{
    for (; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;

    return *s - *t;
}

// The other version, also inluced just in case, commented out for easier testing
// strcmp: return <0 if s<t, 0 if s==t, >0 if s>t 
//int strcmp(char *s, char *t)
//{
//    int i;
//    for (i = 0; s[i] == t[i]; i++)
//        if (s[i] == '\0')
//            return 0;
//
//    return s[i] - t[i];
//}


int main(void)
{
    printf("%d\n", strcmp("sword", "sword"));
    printf("%d\n", strcmp("sword", "shield"));
    printf("%d\n", strcmp("shield", "sword"));

    return 0;
}