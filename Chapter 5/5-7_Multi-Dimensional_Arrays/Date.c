// Rugile Stundziaite 20268495

// EX 5-8
// There is no error checking in day_of_year or month_day. Remedy this defect.
// What if we test the following main()


#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// day
int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    // Error check
    if (month < 1 || month > 12)
        return -1;

    if (day < 1 || day > daytab[leap][month])
        return -1;

    for (i = 1; i < month; i++)
        day += daytab[leap][i];

    return day;
}

// month
void month_day(int year, int yearday, int* pmonth, int* pday)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    //Error check
    if (yearday < 1 || yearday >(leap ? 366 : 365))
    {
        *pmonth = -1;
        *pday = -1;
        return;
    }

    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}

int main(void)
{
    int yearday, month, day;

    yearday = day_of_year(1988, 2, 29);
    printf("%d\n", yearday);

    yearday = day_of_year(2020, 2, 31);
    printf("%d\n", yearday);

    month_day(1988, 60, &month, &day);
    printf("Month: %d, Day: %d\n", month, day);

    month_day(1999, 366, &month, &day);
    printf("Month: %d, Day: %d\n", month, day);

    return 0;
}