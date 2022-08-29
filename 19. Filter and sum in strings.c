// Filter and sum in strings //

#include <stdio.h> 
void main() 
{ 
  char str[50]; 
  int alphabets = 0, digits = 0, sum = 0, i; 
  printf("Enter string: "); 
  scanf("%s",str); 
  for (i = 0; str[i] != '\0'; i++) 
  { 
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) 
      alphabets++; 
    else if (str[i]>='0' && str[i]<='9') 
      digits++; 
  } 
  for (i= 0; str[i] != '\0'; i++) 
    { 
        if ((str[i] >= '0') && (str[i] <= '9')) 
        { 
            sum += (str[i] - '0'); 
        } 
    } 
  printf("\nAlphabets count = %d \nNO. of Digits in the string = %d \nSum of all digits = %d",alphabets,digits,sum); 
}

/* Output: Enter string: loveyou1002times

Alphabets count = 12 
NO. of Digits in the string = 4 
Sum of all digits = 3 /*