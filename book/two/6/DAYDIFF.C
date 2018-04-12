 
#include "general.h"

typedef struct date_tag {
    int day;
    int month;
    int year;
} Date_type;

int DaysAbs(Date_type);

/* prints the number of days between two specified dates    */
void main(void)
{
    Date_type d1, d2;

    printf("Dates are of the format DD MM YYYY.\n\n");
    printf("Enter first date: ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter second date: ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    printf("\nThe number of days between these dates is %d\n",
        DaysAbs(d2) - DaysAbs(d1));
}
 
/* DaysAbs: return the number of days since Jan 1 */
int DaysAbs(Date_type day)
{
    int yrs, days;

    switch(day.month) {
    case 1 : days = 0; break;
    case 2 : days = 31; break;
    case 3 : days = 59; break;
    case 4 : days = 90; break;
    case 5 : days = 120; break;
    case 6 : days = 151; break;
    case 7 : days = 181; break;
    case 8 : days = 212; break;
    case 9 : days = 243; break;
    case 10 : days = 273; break;
    case 11 : days = 304; break;
    case 12 : days = 334; break;
    }
    yrs = day.year * 365;
    days += yrs + day.year / 4 - day.year / 100 + day.year / 400 + day.day;

    return days;
}
