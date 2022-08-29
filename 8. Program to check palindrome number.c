// Palindrome program in C //

#include<stdio.h> 
void main() 
{ 
int num,rem,sum=0,temp; 
    printf("Enter the number: "); 
    scanf("%d",&num); 
    temp=num; 
    while(num>0) 
    { 
      rem=num%10; 
      sum=(sum*10)+rem; 
      num=num/10; 
     } 
    if(temp==sum) 
    printf("Palindrome number"); 
    else 
    printf("Not palindrome"); 
}

/* Output:
Enter the number: 777
Palindrome number /*