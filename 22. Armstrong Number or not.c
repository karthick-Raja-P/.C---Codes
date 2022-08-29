/**************
Check if Armstrong Number or not  in C
Note :
If the given number is equal to the sum of the power of n for each digit present in that integer, then that can be Armstrong Number in C programming. For example, 153 is an Armstrong Number in C programming because total individual digits in 153 = 3
153 = 1³ + 5³ + 3³
= 1 + 125 + 27 = 153
***************/ 

#include <stdio.h>

void main ()
{
  int num, rem, sum = 0, temp;
  printf ("Enter the number: \n");
  scanf ("%d", &num); 
  temp = num;
  while (num > 0)
    {
      rem = num % 10;
      sum = sum + rem * rem * rem;
      num = num / 10;
    }
  if (temp == sum)
    printf ("YES it's an Armstrong Number");
  else
    printf ("No it's NOT Armstrong Number");
}

/* Output: Enter the number:
153
YES it's an Armstrong Number /*