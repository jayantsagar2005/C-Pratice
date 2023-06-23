/*23. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. 
Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0*/

#include<stdio.h>
int main()
{
    float a,b,c,P;
    
    printf("Enter the 1st side of triangle :");
    scanf("%f",&a);

    printf("Enter the 1st side of triangle :");
    scanf("%f",&b);


    printf("Enter the 1st side of triangle :");
    scanf("%f",&c);

    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        P = a+b+c;

        printf("The perimeter of Triangle is %0.1f ",P);
    }

    else
        printf("Sorry, This values is not found Perimeter of Triangle");
    
    
    return 0;
}