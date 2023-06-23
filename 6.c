/*6. Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches */

#include<stdio.h>
int main()
{
    
    int radius;
    float perimeter,area;
    float pi = 3.14;
     
     printf("Enter the radius of Circle :");
     scanf("%d",&radius);
    
    perimeter = 2*pi*radius;
    area = pi*radius*radius;

    printf("Perimeter of Cricle : %f inches\n",perimeter);
    printf("Area of Cricle : %f square inches\n",area);
    
    return 0;
}