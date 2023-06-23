/*10. Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375 */

#include<stdio.h>
int main()
{
    int first_number;
    int second_number;
    int product;

    

    printf("Enter the First Number :");
    scanf("%d",&first_number);

    printf("Enter the Second Number :");
    scanf("%d",&second_number);

    product = first_number * second_number;

    printf("Sumof the above two integers = %d",product);
    
return 0;
}