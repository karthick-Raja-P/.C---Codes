// Count Alphabets Digits and Special Characters in a String //

#include <stdio.h>

void main()
{
  char str[50];
  int alphabets = 0, digits = 0, spec_chars = 0, i;
  printf("Enter string: ");
  scanf("%s",str);
  for (i = 0; str[i] != '\0'; i++)
  {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
      alphabets++;
    else if (str[i]>='0' && str[i]<='9')
      digits++;
    else
      spec_chars++;
  }
  printf("\nAlphabets: %d \nDigits: %d \nSpecial_Characters: %d",alphabets,digits,spec_chars);
}

/* Output: Enter string: Raja@123

Alphabets: 4 
Digits: 3 
Special_Characters: 1 /*
