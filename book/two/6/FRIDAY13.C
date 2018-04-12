 
#include "general.h"

typedef int Grid_type[8][32];

void GetInfo(int *, int *);
void Initialize(Grid_type, int *, int);
void TallyDays(Grid_type, int, int, int);
void PrintResults(Grid_type);
int FirstDay(int);
Boolean_type LeapYear(int);
int DaysInMonth(int, int);

/* calculate the number of times each weekday occurs on a specific day  */
void main(void)
{
    int year, startyear, range, w;
    Grid_type daycount;

    GetInfo(&startyear, &range);
    Initialize(daycount, &w, startyear);
    TallyDays(daycount, startyear, range, w);
    PrintResults(daycount);
}
 
/* GetInfo: get the starting year and range */
void GetInfo(int *startyear, int *range)
{
    printf("What year do you want to begin with? ");
    scanf("%d", startyear);
    printf("Number of years? ");
    scanf("%d", range);
}
 
/* Initialize: initialize the array and get the starting information    */
void Initialize(Grid_type daycount, int *w, int startyear)
{
    int i, j;

    for (i = 1; i < 8; i++)
        for (j = 1; j < 32; j++)
            daycount[i][j] = 0;
    *w = FirstDay(startyear);
}
 
/* TallyDays: count the days    */
void TallyDays(Grid_type daycount, int startyear, int range, int w)
{
    int y, m, d, dim;

    for (y = startyear; y < startyear+range; y++)
        for (m = 1; m <= 12; m++) {
            dim = DaysInMonth(m, y);
            for (d = 1; d <= dim; d++) {
                (daycount[w][d])++;
                w++;
                if (w == 8)
                    w = 1;
            }
        }
}
 
/* PrintResults: display the results    */
void PrintResults(Grid_type daycount)
{
    int i, j, k;

    printf("\n\n");
    printf("%11s", "Sun");
    printf("%9s", "Mon");
    printf("%9s", "Tue");
    printf("%9s", "Wed");
    printf("%9s", "Thu");
    printf("%9s", "Fri");
    printf("%9s", "Sat");
    printf("\n");
 
    for (k = 0; k < 68; k++)
        printf("-");
    printf("\n");
 
    for (i = 1; i < 32; i++) {
        printf("%4d|", i);
        for (j = 1; j < 8; j++)
            printf("%6d  |", daycount[j][i]);
        printf("\n");
    }
}
 
/* LeapYear: non-zero if y is a leap year   */
Boolean_type LeapYear(int y)
{
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}
 
/* FirstDay: return the day of the week for the first day   */
int FirstDay(int y)
{
    int t;

    t = y + (y-1) / 4 - (y-1) / 100 + (y-1) / 400;
    return t % 7 + 1;
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
