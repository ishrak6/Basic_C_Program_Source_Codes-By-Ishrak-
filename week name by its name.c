#include <stdio.h>
int main()
{
    int week;
    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Friday");
    }
    else if(week == 2)
    {
        printf("Saturday");
    }
    else if(week == 3)
    {
        printf("Sunday");
    }
    else if(week == 4)
    {
        printf("Monday");
    }
    else if(week == 5)
    {
        printf("Tuesday");
    }
    else if(week == 6)
    {
        printf("Wednesday");
    }
    else if(week == 7)
    {
        printf("Thrusday");
    }

    return 0;
}
