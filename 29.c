/*29. Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34*/

#include<stdio.h>
int main()
{
    int number[5],total=0;;

    printf("Enter the 1 number :");
    scanf("%d",&number[0]);

    printf("Enter the 2 number :");
    scanf("%d",&number[1]);

    printf("Enter the 3 number :");
    scanf("%d",&number[2]);

    printf("Enter the 4 number :");
    scanf("%d",&number[3]);

    printf("Enter the 5 number :");
    scanf("%d",&number[4]);

    for (int i = 0; i < 5; i++)
    {
        if (number[i]%2 != 0)
        {
            total += number[i];
        }
        
    }
    
    printf("The odd number Sum is %d ",total);

    return 0;
}