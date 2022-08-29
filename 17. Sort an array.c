// Sort an array in C //

#include <stdio.h>

void main()
{
    int arr[100],n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

/* Output: Enter the number of elements: 3
Enter the elements:
13
58
24
The numbers arranged in ascending order are given below:
58 24 13 /*