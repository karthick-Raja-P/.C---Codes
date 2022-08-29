// Print fibonacci Series till an integer //

#include<stdio.h>  

void main()    
{    
int num,num1=0,num2=1,num3;
printf("Enter the number of elements: ");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
  printf("%d ",num1);
  num3 = num1+num2;
  num1 = num2;
  num2 = num3;
}

}

/* Output:
Enter the number of elements: 15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 /*