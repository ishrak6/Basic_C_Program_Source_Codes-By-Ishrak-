#include<stdio.h>
int main()
{
    int i,j,temp,n,a[20];
    printf("How many elements do you want to sort : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;

            while(j>=0 && a[j]<temp)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;

    }
    printf("The sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
