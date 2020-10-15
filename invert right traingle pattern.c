#include <stdio.h>
int main()
{
  	int num, i, j;
  	printf("Please Enter the Number of Rows: ");
  	scanf("%d", &num);
  	for (i = num; i>=1; i-- )
  	{
      	for (j = i; j>=1; j--)
      	{
          	printf("%d", j);
      	}
      	printf("\n");
  	}
  	return 0;
}
