/*27. Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2*/

#include<stdio.h>
int main()
{
    int number[5],total =0,total1;

    printf("Enter the first number : ");
    scanf("%d",&number[0]);

    printf("Enter the first number : ");
    scanf("%d",&number[1]);

    printf("Enter the first number : ");
    scanf("%d",&number[2]);

    printf("Enter the first number : ");
    scanf("%d",&number[3]);

    printf("Enter the first number : ");
    scanf("%d",&number[4]);

    for (int i = 0; i < 5; i++)
    {
        if (number[i]>0)
        {
           total++;
        }
        else if (number[i]<0)
        {
            total1++;
        }
    }

    printf("The postive number is %d \n", total);
    printf("The negative number is %d \n",total1);
    
    return 0;
}