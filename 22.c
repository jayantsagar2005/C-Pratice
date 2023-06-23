/*2. Write a C program that reads 5 numbers and sums all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46*/

#include<stdio.h>
int main()
{
    int number[5],total=0;

    printf("Enter the first Number :");
    scanf("%d",&number[0]);

    printf("Enter the second Number :");
    scanf("%d",&number[1]);

    printf("Enter the third Number :");
    scanf("%d",&number[2]);

    printf("Enter the fourth Number :");
    scanf("%d",&number[3]);

    printf("Enter the fivty Number :");
    scanf("%d",&number[4]);

    for (int  i = 0; i < 5; i++)
    {
        if ((number[i]%2) != 0)
        {
            total += number[i];
        }
        
    }

    printf("The sum of odd number is %d",total);

    return 0;
}