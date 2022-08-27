// C program to print alphabets from a to z //
// N -> Normal & R -> Reverse //
// NOTE : Use switch case statement and for Loop //

#include<stdio.h>

void main()
{
    char ch,N,R,order;
    printf("Enter the orders type: ");
    scanf("%c",&order);
    switch (order)
    {
      case'N':
      for(ch='A';ch<='Z';ch++)
      printf("%c ",ch);
      break;
      {
      case'R':
      for(ch='Z';ch>='A';ch--)
      printf("%c ",ch);
      break;
      }
    }
}

/* Output: 
Enter the orders type: R
Z Y X W V U T S R Q P O N M L K J I H G F E D C B A 
Enter the orders type: N
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z /*