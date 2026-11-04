// Rugile Stundziaite 20268495
// 
// EX 1-15
// rewrite the temperature conversion program of 
// section 1.2 to use a function for conversion

#include <stdio.h>

int fahrToCel(int fahr);
int celToFahr(int celsius);

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;


    printf("char\t\t-> %d\n", sizeof(char));
    printf("short\t\t-> %d\n", sizeof(short));
    printf("int\t\t-> %d\n", sizeof(int));
    printf("long\t\t-> %d\n", sizeof(long));
    printf("long long\t\t-> %d\n", sizeof(long long));
    printf("float\t\t-> %d\n", sizeof(float));
    printf("double\t\t-> %d\n", sizeof(double));
    printf("long double\t\t-> %d\n", sizeof(long double));

    fahr = lower;

    printf("Fahrenheit_to_Celsius_Table\n"); // header for fahrenheit table

    while (fahr <= upper) {
        celsius = fahrToCel(fahr);      // call function
        printf("%d\t\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\nCelsius_To_Fahrenheit_Table\n");  // header for celsius

    celsius = lower;

    while (celsius <= upper) {
        fahr = celToFahr(celsius);      // call celsius function
        printf("%d\t\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}

int fahrToCel(int fahr)     // Function for fahrenheit to celsius
{
    return 5 * (fahr - 32) / 9;
}

int celToFahr(int celsius)      // function for celsius to fahrenheit
{
    return (9 * celsius) / 5 + 32;
}
