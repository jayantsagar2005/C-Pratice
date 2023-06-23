/*32. Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78*/
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the any integers 1 to 100 :");
    scanf("%d",&n);

    for (int i = 0; i <= 100; i++)
    {
        if (i%n==3)
        {
         printf("%d\n",i);
    }
    }
    
    return 0;
}
