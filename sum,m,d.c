#include<stdio.h>
int main ()
{
    int a,b,sum,minus,multiplication,divided;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    sum=a+b;
    minus=a-b;
    multiplication=a*b;
    divided=a/b;
    printf("sum=%d\n", sum);
    printf("minus=%d\n", minus);
    printf("multiplication=%d\n", multiplication);
    printf("divided=%d\n", divided);
}
