#include <stdio.h>
int main()
{
   float i, power, base, x=1, result;
   printf("enter the power : \n");
   scanf("%f", &power);
   printf("enter base :");
   scanf("%f", &base);
   for (i=1; i<=power; i++)
   {
       x = x * base;
       result = (1 / x);
   }
   printf("%f is answer.",result);
   return 0;

}
