/*35. Write a C program to check if two numbers in a pair are in ascending order or descending order.
Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Expected Output:
Input second number of the pair: 2
The pair is in descending order!*/

#include<stdio.h>
int main()
{
    int a,b;

    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");

    printf("Input first number of the pair:");
    scanf("%d",&a);

    printf("Input second number of the pair:");
    scanf("%d",&b);

    if (a>b)
    {
       printf("Descending Order");
    }

    else{
        printf("Ascending Order");
    }
    
    return 0;
}