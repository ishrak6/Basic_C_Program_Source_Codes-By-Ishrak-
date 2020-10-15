#include<stdio.h>

int main ()
{
   float height,widgth,area;
    printf("Enter the value of height: ");
    scanf("%f", &height);
    printf("Enter the value of Widgth: ");
    scanf("%f", &widgth);
    area=0.5*height*widgth;
    printf("area=%.2f", area);
}