/*53. Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000*/

#include<stdio.h>
int main()
{
    float si;
    int p,t,r;

    printf("Enter the principle of of simple interest :");
    scanf("%d",&p);

    printf("Enter the rate of of simple interest :");
    scanf("%d",&r);

    printf("Enter the time of of simple interest :");
    scanf("%d",&t);

    si = p*r*t/100;

    printf("The Simple Interest is %.1f",si);

    return 0;
}