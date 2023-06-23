/*34. Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24*/

#include<stdio.h>
int main()
{
    int x,y,total=0;
    printf("Enter the pair of number of the pair 10 to 2 \n");
    
    printf("Ener the first number :");
    scanf("%d",&x);

    printf("Ener the second number :");
    scanf("%d",&y);

    if (x<y)
    {
        return 0;
    }

    printf("Odd Number is :\n");

    for (int i = y; i <= x; i++)
    {
        if ((i % 2) != 0)
        {
           printf("%d\n",i);
          
           total += i;  
        }
        
    }

    printf("The sum of Odd Number is %d",total);

    return 0;
}