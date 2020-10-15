#include <stdio.h>
int main()

{
    int int1, int2;
    printf("Input the values for Num1 and Num2 : ");
    scanf("%d %d", &int1, &int2);

    if (int1 == int2)

        printf("Num1 and Num2 are equal\n");

    else

        printf("Num1 and Num2 are not equal\n");
}