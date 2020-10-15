#include<stdio.h>
int main ()
{
    int num;
    printf("Input a number:\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("it is even.", num);
    }
    else
        printf("it is odd.", num);

    return 0;



}
