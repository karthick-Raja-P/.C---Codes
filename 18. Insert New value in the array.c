// Insert New value in the array //

#include<stdio.h>
void main()
{
    int arr[100],num,i,value,pos;
    printf("Enter the size of array: \n");
    scanf("%d",&num);
    
    printf("Enter %d elements in the array\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the value to be inserted:\n");
    scanf("%d",&value);
    
    printf("Enter the Position, where the value to be inserted:\n");
    scanf("%d",&pos);
    
    for(i=num-1;i>=pos-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = value;
    
    printf("After Insert the element the new array:\n");
    for(i=0;i<=num;i++)
    {
        printf("%d ",arr[i]);
    }
}

/* Output: Enter the size of array: 4
Enter 4 elements in the array
1
3 
5
7
Enter the value to be inserted: 2
Enter the Position, where the value to be inserted:
2
After Insert the element the new array:
1 2 3 5 7 /*