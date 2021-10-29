#include <stdio.h>

int main()
{
    int day = 0;
    int month;
    int year;
    int daymax;
    printf("Enter the number of day  :");
    scanf("%d", &day);
    printf("Enter the number of month : ");
    scanf("%d", &month);
    printf("Enter the number of years : ");
    scanf("%d", &year);
    if (year > 1900 || month < 0 || month > 12 || day < 0 || day > 31)
    {
        printf("Invalid date");
    }
    else
    {
        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
              daymax = 31;
              break;
            case 2:
								if (year % 4 == 0 && year % 100 ! = 0 ) || (year % 400 == 0 ))
                    daymax = 29;
                else
                    daymax = 28;
            case 4:
            case 6:
            case 9:
            case 11:
                daymax = 30;
                break;
        }
        if (day <= daymax);
        {
            printf("valid date \n");
        }
        else
        {
           printf("Invalid date\n");
        }
    }
    return 0;
}
