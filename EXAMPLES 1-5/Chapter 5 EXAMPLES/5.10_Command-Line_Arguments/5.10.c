// Rugile Stundziaite 20268495
// All example from 5.10 are in the same file, again, did not wanyt to divide them into multiple


// Slide 22 Echo
#include <stdio.h>

// echo command-line arguments : 1st version 
int main(int argc, char* argv[])
{
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc - 1) ? " " : "");

    printf("\n");

    return 0;
}

// ------------------------------------------
// Slide 23 getline
#include <stdio.h>
#include <string.h>

#define MAXLINE 1000   // maximum input line length 

int getline(char line[], int max);

// find all lines matching pattern 
int main(int argc, char* argv[])
{
    char line[MAXLINE];
    int found = 0;

    if (argc != 2)
        printf("Usage : find pattern\n");
    else
        while (getline(line, MAXLINE) > 0)
        {
            if (strstr(line, argv[1]) != NULL)
            {
                printf("%s", line);
                found++;
            }
        }

    return found;
}

// ------------------------------------------------
// Slide 24 find

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000   // maximum input line length 

int getline(char line[], int max);

// find all lines matching pattern 
int main(int argc, char* argv[])
{
    char line[MAXLINE];
    long lineno = 0;

    int c;
    int except = 0;
    int number = 0;
    int found = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c)
            {
            case 'x':
                except = 1;
                break;

            case 'n':
                number = 1;
                break;

            default:
                printf("find : illegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }

    if (argc != 1)
        printf("Usage : find -x -n pattern\n");
    else
        while (getline(line, MAXLINE) > 0)
        {
            lineno++;

            if ((strstr(line, *argv) != NULL) != except)
            {
                if (number)
                    printf("%ld:", lineno);

                printf("%s", line);
                found++;
            }
        }

    return found;
}