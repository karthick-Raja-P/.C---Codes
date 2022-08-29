/******
Recreate strlen() function in C 
Note : Create a function strlen() and use it.
******/

#include<stdio.h> 
int FindLength (char *s); 
void main() 
{ 
    int length; 
    char str[100]; 
    printf("Input: \n"); 
    scanf("%s",str); 
    length = FindLength(str); 
    printf("%d ",length); 
} 
 
int FindLength (char *s) 
{ 
    int i; 
    for(i=0;s[i];i++); 
    return i; 
}

/* Output: Input:
hello
5 /*