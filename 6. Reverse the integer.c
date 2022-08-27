// Reverse the integer number in c //

#include <stdio.h>

void main()
{
    int num,rem,sum=0;
    printf("Enter the integer:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        sum = sum*10+rem;
        num = num/10;
    }
    printf("The Reversed integer is %d",sum);
}

/* Output:
Enter the integer:546
The Reversed integer is 645 /*