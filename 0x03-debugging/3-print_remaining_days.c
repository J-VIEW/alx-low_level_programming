#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
        {
            day++; // Leap year, so add an extra day for February 29th
        }
    }

    int day_of_year = day;
    switch (month - 1)
    {
        case 11: day_of_year += 30; // December
        case 10: day_of_year += 31; // November
        case 9: day_of_year += 30; // October
        case 8: day_of_year += 31; // September
        case 7: day_of_year += 31; // August
        case 6: day_of_year += 30; // July
        case 5: day_of_year += 31; // June
        case 4: day_of_year += 30; // May
        case 3: day_of_year += 31; // April
        case 2: day_of_year += 28; // March
        case 1: day_of_year += 31; // February (non-leap year)
    }

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", (is_leap(year) ? 366 : 365) - day_of_year);
}

int is_leap(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

