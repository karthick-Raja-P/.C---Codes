/*****************************
 * A circles array which have multiple circle's radius(r) with it
Now , find diameter, circumstances & area for each cricle in array.
Note: 
Formulas:
Diameter - 2r
Circumstances - 2πr
Area - π r * r
(π is Pi , and it's value is 3.14)
******************************/

#include <stdio.h>

float diameter(float);
float circumferernce(float);
float area(float);

void main()
{
    float radius,dia,cir,are;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    dia = diameter(radius);
    cir = circumferernce(radius);
    are = area(radius);
    printf("\nDiameter of the circle: %.2f units",dia);
    printf("\nCircumferernce of the circle: %.2f units",cir);
    printf("\nArea of the circle: %.2f sq.units",are);
}

float diameter(float radius)
{
    return(2*radius);
}
float circumferernce(float radius)
{
    return(2*3.14*radius);
}
float area(float radius)
{
    return(3.14*radius*radius);
}

/* Output: Enter the radius of the circle: 10
Diameter of the circle: 20.00 units
Circumferernce of the circle: 62.80 units
Area of the circle: 314.00 sq.units /*

