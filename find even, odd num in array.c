#include<stdio.h>
 int main()
  {
   int arr[20],even[20],odd[20],i,j=0,k=0,no;
   printf("Enter size of array: ");
   scanf("%d",&no);
   printf("Enter any %d numbers in array: ",no);
   for(i=0; i<no;i++)
   {
   scanf("%d",&arr[i]);
   }
   for(i=0; i<no;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }
  printf("\nEven numbers: ");
  for(i=0; i<j ;i++)
   {
    printf("%d ",even[i]);
   }
  printf("\nOdd numbers: ");
  for(i=0; i<k; i++)
   {
    printf("%d ",odd[i]);
   }
   return 0;
  }
