/*13. Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35*/

#include<stdio.h>
int main()
{
    int a,b,c,result,max;

    printf("Enter the first integers :");
    scanf("%d",&a);
    
    printf("Enter the second integers :");
    scanf("%d",&b);
    
    printf("Enter the third integers :");
    scanf("%d",&c);

    result = (a + b + abs(a -b))/2;

    max = (result + c + abs(result - c))/2;

    printf("The maximum value of three integers is %d",max);


    return 0;
}