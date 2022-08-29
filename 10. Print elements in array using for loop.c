// Get and print elements in array using for loop //

#include<stdio.h> 

void main() 
{ 
   int arr[5],i; 
   printf("Enter 5 elements in array:\n"); 
   for(i=0;i<5;i++) 
   { 
       printf("%d : ",i); 
       scanf("%d",&arr[i]); 
   } 
   printf("\nElements in array are: "); 
   for(i=0;i<5;i++) 
   { 
       printf("%d ",arr[i]); 
   } 
}

/* Output:
Enter 5 elements in array:
0 : 12
1 : 13
2 : 1
3 : 42
4 : 13

Elements in array are: 12 13 1 42 13 /*