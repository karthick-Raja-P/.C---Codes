/**************
Currency formation using following notes
[2000,500,100,50,20,10,5,2,1]
***************/

#include<stdio.h>
void main ()
{
     int amt[10] = {2000,500,200,100,50,20,10,5,2,1},m,temp,i;
     printf("Enter the amount: ");
     scanf("%d",&m);
     temp = m;
     for(i=0;i<10;i++)
     {
       printf("\n%d X %d",amt[i],temp/amt[i]);
       temp = temp%amt[i];
     }
}

/* Output: Enter the amount: 12456
2000 X 6
500 X 0
200 X 2
100 X 0
50 X 1
20 X 0
10 X 0
5 X 1
2 X 0
1 X 1 /*
