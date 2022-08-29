/*************************
 * Q. Create a rectangle R with property length and breadth. And calculate perimeter and area for R. 
 * NOTE - Use structure. 
Perimeter of rectangle formula =    2(l + b) units
Area of rectangle formula =     l × b sq. units
**************************/

#include <stdio.h>
 
  struct Rectangle
 {
   int l,b,area,peri;
 };
 
void main()
{
  struct Rectangle r;
  printf("Enter length in cm: ");
  scanf("%d",&r.l);
  printf("\nEnter breath in cm: ");
  scanf("%d",&r.b);
  r.area = r.l*r.b;
  r.peri =2*(r.l+r.b);
  printf("\nArea = %d sq.cm",r.area);
  printf("\nPerimeter = %d cm",r.peri);  
}

/* Output: Enter length in cm: 3

Enter breath in cm: 2

Area = 6 sq.cm
Perimeter = 10 cm /*