// Program to Find the Largest Number Among Three Numbers //
// Note : Use float data-type //

#include <stdio.h>

 void main () 
{
  
float num1, num2, num3;
  
printf ("Enter three numbers:\n");
  
scanf ("%f", &num1);
  
scanf ("%f", &num2);
  
scanf ("%f", &num3);
  
if ((num1 > num2) && (num1 > num3))
    
printf ("%.1f is the largest number", num1);
  
  else if ((num2 > num1) && (num2 > num3))
    
printf ("%.1f is the largest number", num2);
  
  else
    
printf ("%.1f is the largest number", num3);

}

/* Output: 
Enter three numbers:
23
42
54
54.0 is the largest number /*

