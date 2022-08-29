// INPUT: Enter the string: / hi all how are you! / Enter a letter to get details: o //

#include <stdio.h> 

void main() 
{ 
    char str[1000],ch;   
    int i,count=0; 
    printf("Enter the string : "); 
    gets(str); 
    printf("Enter a letter to get details: "); 
    scanf("%c",&ch); 
    for(i=0;str[i];i++)   
    { 
     if(str[i]==ch) 
     { 
          count++; 
     } 
    } 
    printf("'%c' is present: yes \nCount %d ",ch,count); 
}

/* Output: Enter the string : hello
Enter a letter to get details: l
'l' is present: yes 
Count 2 /*