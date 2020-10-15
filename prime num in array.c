#include<stdio.h>
int main()
{
    int arr[10], i, s, j, p;
    printf("Enter Size of An Array: ");
    scanf("%d", &s);

    printf("Enter Array Elements:\n");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("All Prime List is:\n");
    for (i = 0; i < s; i++)
    {
        j = 2;
        p = 1;
        while (j < arr[i])
        {
            if (arr[i]%j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
