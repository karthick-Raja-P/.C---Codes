// Check if Armstrong Number or not  in C //

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