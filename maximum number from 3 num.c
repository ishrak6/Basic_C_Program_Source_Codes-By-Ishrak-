#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b && a>=c)
        printf("%f is the largest",a);
    else if(b>=a && b>=c)
        printf("%f is the ",b);
    else
        printf("%f is the largest",c);
    return 0;
}
