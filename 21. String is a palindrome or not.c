// Check if a string is a palindrome or not / Note : 1. Palindrome is a string, which when read in both forward and backward way is same. //
// Eg : lol, amma , appa, dad, malayalam .. etc //

#include <stdio.h>

void main()
{
    char str[100];
    int i,l,j,set=0;
    printf("Enter the string: \n");
    scanf("%s",str);
    for(l=0;str[l];l++);
        for(i=0,j=l-1;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            set=1;
            break;
        }
            if(set==1)
            {
            printf("The given string is NOT palindrome");
            }
            else
            {
            printf("The given string is palindrome");
            }
}

/* Output: Enter the string: 
amma
The given string is palindrome /*