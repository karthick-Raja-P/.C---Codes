// Write a program in C to find maximum occurring character in a string //

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],maxchar;
    int i,j,count=0,maxcount=0;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        count=0;
        for(j=0;j<strlen(str);j++)
        {
        if(str[i]==str[j])
            count++;
        }
    if(maxcount<count)
    {
        maxcount=count;
        maxchar=str[i];
    }
    }    
    printf("%c is maximum occurring character",maxchar);
}

/* Output: Enter a string: rajaaa
a is maximum occurring character /*