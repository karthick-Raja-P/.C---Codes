// Write a program in C to copy the elements of one array into another array //

#include<stdio.h>   
    
void main() 
{     
 int arr[100],arr1[100],size,i; 
 printf("Enter array size: \n"); 
 scanf("%d",&size); 
 printf("Enter elements in array: "); 
 for(i=0;i<size;i++) 
 { 
     scanf("%d",&arr[i]); 
 } 
 for(i=0;i<size;i++) 
 { 
     arr1[i] = arr[i]; 
 } 
 printf("Original array - Array 1: \n"); 
 for(i=0;i<size;i++) 
 { 
     printf("%d ",arr[i]); 
 } 
 printf("\nDuplicate array - Array 2: \n"); 
 for(i=0;i<size;i++) 
 { 
     printf("%d ",arr1[i]); 
 } 
}

/* Output: Enter array size: 5
Enter elements in array: 
12
34 
45
74
78
Original array - Array 1: 
12 34 45 74 78 
Duplicate array - Array 2: 
12 34 45 74 78 /*