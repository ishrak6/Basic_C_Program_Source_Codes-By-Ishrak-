#include<stdio.h>
int main ()
{
    float total,average;
    float bangla,english,math,physcis,ict;
    printf("Enter the marks of bangla:\n");
    scanf("%f", &bangla);
    printf("Enter the marks of english:\n");
    scanf("%f", &english);
    printf("Enter the marks of math:\n");
    scanf("%f", &math);
    printf("Enter the marks of physcis:\n");
    scanf("%f", &physcis);
    printf("Enter the marks of ict:\n");
    scanf("%f", &ict);
    total=bangla+english+math+physcis+ict;
    average=total/5;
    printf("total=%.2f\n", total);
    average=total/5;
    printf("average=%.2f\n", average);
}
