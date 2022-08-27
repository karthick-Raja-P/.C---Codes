// Program to find average of N Numbers //

#include <stdio.h>

void main ()
{
  int n, num, sum = 0, i;
  float avg;
  printf ("Enter the numbers count: ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("Number %d = ", i);
      scanf ("%d", &num);
      sum = sum + num;
    }
  avg = sum / n;
  printf ("\nSum of n Numbers = %d", sum);
  printf ("\nAverage of n Numbers = %.02f", avg);

}

/* Output

Enter the numbers count: 3
Number 1 = 2
Number 2 = 3
Number 3 = 4

Sum of n Numbers = 9
Average of n Numbers = 3.00 /*

