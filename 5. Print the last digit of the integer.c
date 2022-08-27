// Print the last digit of the integer //

#include <stdio.h>

 void main () 
{
  
int num, digit;
  
printf ("Enter the integer: ");
  
scanf ("%d", &num);
  
digit = num % 10;
  
printf ("Last Digit of %d is : %d", num, digit);

} 

/* Output: 
Enter the integer: 12
Last Digit of 12 is : 2 /*