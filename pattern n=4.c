#include<stdio.h>
int main()
{
    int i,j,number;

    printf("Enter any Number : ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
    	for(j = 1; j <= i; j++)
		{
			printf("1");
        }
        printf("\n");
    }
    return 0;
}
