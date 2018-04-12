 
#include "general.h"

Boolean_type LeapYear(int);
int DaysInMonth(int, int);
int DayOfWeek(int, int, int);

/* prints the day of the week for a specified date  */
void main(void)
{
    int day, month, date, year;

    printf("Enter the date please (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("%d %d %d occurs on a ", day, month, year);
    switch(DayOfWeek(day, month, year)) {
    case 0 :
        printf("Saturday");
        break;
 
    case 1 :
        printf("Sunday");
        break;
 
    case 2 :
        printf("Monday");
        break;
 
    case 3 :
        printf("Tuesday");
        break;
 
    case 4 :
        printf("Wednesday");
        break;
 
    case 5 :
        printf("Thursday");
        break;
 
    case 6 :
        printf("Friday");
        break;
 
    }
    printf("\n");
}
 
/* DayOfWeek: returns the day of the week for the given date    */
int DayOfWeek(int day, int month, int year)
{
    int m;

    if (month > 2)
        m = month;
    else {
        m = month + 12;
        year--;
    }
    return (day + 2 * m + 6 * (m + 1) / 10 + year + year / 4 -
            year / 100 + year / 400 + 2) % 7;
}
 
/* LeapYear: non-zero if y is a leap year   */
Boolean_type LeapYear(int y)
{
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}
 
/* DaysInMonth: returns the number of days in the month */
int DaysInMonth(int month, int year)
{
    switch(month) {
    case 4 : case 6 : case 9 : case 11 :
        return 30;
 
    case 2 :
        if (LeapYear(year))
            return 29;
        else
            return 28;
 
    default :
        return 31;
    }
}
