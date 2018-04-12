 
#include "general.h"

int FirstDay(int);
Boolean_type LeapYear(int);
void PrintHeader(int);
void Spaces(int);
int PrintWeek1(int, int);
int DaysInMonth(int, int);
int PrintRest(int, int, int, int);

/* prints the calendar for a specified year */
void main(void)
{
    int day, month, date, year;

    printf("Enter the year please: ");
    scanf("%d", &year);
    printf("\n\n==========%d==========\n", year);
    day = FirstDay(year);
    printf("\n\n\n");
    for (month = 1; month <= 12; month++) {
        PrintHeader(month);
        date = 1;
        Spaces(day);
        date = PrintWeek1(date, day);
        day = PrintRest(date, day, month, year);
    }
}
 
/* FirstDay: determines the first day of the year   */
/* 1 - Sun, 2 - Mon, ..., 7 - Sat       */
int FirstDay(int y)
{
    int t;

    t = y + (y-1) / 4 - (y-1) / 100 + (y-1) / 400;
    return t % 7 + 1;
}
 
/* LeapYear: non-zero if y is a leap year   */
Boolean_type LeapYear(int y)
{
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

 
/* PrintHeader: print the header for the appropriate month  */
void PrintHeader(int month)
{
    printf("%25c", ' ');
    switch(month) {
    case 1 : printf("January"); break;
 
    case 2 : printf("February"); break;
 
    case 3 : printf("March"); break;
 
    case 4 : printf("April"); break;
 
    case 5 : printf("May"); break;
 
    case 6 : printf("June"); break;
 
    case 7 : printf("July"); break;
 
    case 8 : printf("August"); break;
 
    case 9 : printf("September"); break;
 
    case 10 : printf("October"); break;
 
    case 11 : printf("November"); break;
 
    case 12 : printf("December"); break;
    }
 
    printf("\n\n");
    printf("Sun");
    printf("%9s", "Mon");
    printf("%9s", "Tue");
    printf("%9s", "Wed");
    printf("%9s", "Thu");
    printf("%9s", "Fri");
    printf("%9s", "Sat");
    printf("\n\n");
}
 
/* Spaces: print the day of the week separators */
void Spaces(int day)
{
    int j;

    if (day > 1)
        for (j = 1; j < day; j++)
            printf("     |   ");
}
 
/* PrintWeek1: print the week   */
int PrintWeek1(int date, int day)
{
    int i;

    for (i = day; i <= 7; i++) {
        printf("%2d   |   ", date);
        date++;
    }
    printf("\n");
    return date;
}
 
/* DaysInMonth: return the number of days in the month  */
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
 
/* PrintRest: print the rest of the month */
int PrintRest(int date, int day, int month, int year)
{
    int dim;

    dim = DaysInMonth(month, year);
    while (date <= dim) {
        day = 1;
        do {
            printf("%2d   |   ", date);
            date++;
            day++;
        } while (day <= 7 && date <= dim);
 
        printf("\n");
    }
    printf("\n");
    return day;
}
