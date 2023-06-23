/*54. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches*/

#include<stdio.h>
int main()
{
    int cm;
    float inche;

    printf("Enter the distance in cm :");
    scanf("%d",&cm);

    // 1 cms = 0.394

    inche = cm*0.394;

    printf("The distance of %d cm is = %0.3f inches",cm,inche);

    return 0;
}