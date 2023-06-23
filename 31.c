/*31. Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. 
Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the any integers : ");
    scanf("%d",&n);

    if (n%2==0 && n>0)
    {
       printf("This nhmber is Positive Even");
    }
    
    else if (n%2==0 && n<0)
    {
        printf("This number is Negative Even");
    }

    else if (n%2!=0 && n>0)
    {
        printf("This number is Positive Odd");
    }
    
    else {
        printf("This number is Negative Odd");
    }
    
    return 0;
}