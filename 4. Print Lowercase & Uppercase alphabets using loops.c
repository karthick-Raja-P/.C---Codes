// Print Lowercase/Uppercase alphabets using loops // 
 
// For Loop //

#include <stdio.h>

void main()
{
    char ch;
    printf("Lowercase alphabets: \n");
    for(ch='a';ch<='z';ch++)
    {
        printf("%c ",ch);
    }
    printf("\nUppercase alphabets: \n");
    for(ch='A';ch<='Z';ch++)
    {
        printf("%c ",ch);
    }
}

// While Loop //

#include <stdio.h>

void main ()
{
  char ch = 'A';
  printf ("Uppercase alphabets: \n");
  while (ch <= 'Z')
    {
      printf ("%c ", ch);
      ch++;
    }
  ch = 'a';
  printf ("\nLowercase alphabets: \n");
  while (ch <= 'z')
    {
      printf ("%c ", ch);
      ch++;
    }
}

// Do While Loop //

#include <stdio.h>

void main ()
{
  char ch;
  printf ("Uppercase alphabets: \n");
  ch = 'A';
  do
    {
      printf ("%c ", ch);
      ch++;
    }
  while (ch <= 'Z');

  printf ("\nLowercase alphabets: \n");
  ch = 'a';
  do
    {
      printf ("%c ", ch);
      ch++;
    }
  while (ch <= 'z');
}

/* Output:
Uppercase alphabets: 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
Lowercase alphabets: 
a b c d e f g h i j k l m n o p q r s t u v w x y z /*