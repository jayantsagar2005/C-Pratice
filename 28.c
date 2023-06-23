/*28. Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00*/

#include<stdio.h>
int main()
{
    int number[5],total=0,total1=0;
    float avg;

    printf("Enter the First Number :");
    scanf("%d",&number[0]);

    printf("Enter the Second Number :");
    scanf("%d",&number[1]);

    printf("Enter the Third Number :");
    scanf("%d",&number[2]);

    printf("Enter the Fourth Number :");
    scanf("%d",&number[3]);

    printf("Enter the Fivth Number :");
    scanf("%d",&number[4]);

    for (int  i = 0; i < 5; i++)
    {
        if (number[i]>0)
        {
           total++;
           total1 += number[i];

        }
        
    }
    
    printf("The positive Number is %d \n",total);

    printf("The total of Positive Number is %d \n",total1);

    avg = total1/total;

    printf("Average value of the said positive numbers: %0.2f \n ",avg);
    
    return 0;
}