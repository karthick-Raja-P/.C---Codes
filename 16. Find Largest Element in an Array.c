// C Program to Find Largest Element in an Array //

#include<stdio.h>

void main ()
{
    int arr[10],num, i, largest;
      printf("Enter number of elements in array: ");
      scanf("%d",&num);
      printf("Enter element in array:\n");
      for(int i=0;i<num;i++)
      { 
        scanf("%d",&arr[i]);
      }
        largest=arr[0];
      for(int i=0;i<num;i++)
      {
        if(arr[i]>largest)
        {
          largest=arr[i];
        }
        else if(arr[i]!=largest)
        {
        }
      }        
        printf("\nThe largest element in array is %d", largest);   
}

/* Output: Enter number of elements in array: 3
Enter element in array:
12
13
15
The largest element in array is 15 /*