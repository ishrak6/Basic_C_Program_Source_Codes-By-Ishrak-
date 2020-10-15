#include<stdio.h>
int main ()
{
    int a[10];
    int i;
    printf("Enter value of array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The list of values: ");
    for(i=0; i<10; i++)
    {
        printf("a[%d]= %d\n",i,a[i]);
    }
}
