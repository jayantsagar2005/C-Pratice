/*39. Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521*/

#include<stdio.h>
int main()
{
    int x,y,total = 0;

    printf("Input the First Integers :");
    scanf("%d",&x);

    printf("Input the Second Integers :");
    scanf("%d",&y);

    for (int i = x; i <= y; i++)
    {
        if (i%17!=0){
           
            total += i;
        }

    }
    

    printf("The Sum of Integers %d between %d not divisible by 17 is %d" ,x , y,total); 
    
    
    return 0;
}