// Print the INPUT: A3V5C6 / Note: input is a string //

#include<stdio.h>

void main()
{
    char str[1000] = "A3V5C6";
    
    for(int i=0;str[i]!='\0';i=i+2)
    {
        int range = str[i+1] - '0';
        for(int j=0;j<range;j++)
        {
            printf("%c",str[i]);
        }
    }
}

/* Output: AAAVVVVVCCCCCC /*