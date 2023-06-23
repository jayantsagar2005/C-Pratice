/*24. Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!*/

#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the first integers :");
    scanf("%d",&a);

    printf("Enter the second integers :");
    scanf("%d",&b);

    if (a%b==0)
    {
        printf("This integers are multiplied");
    }

    else
        printf("This integers are not multiplied");
    
    return 0;
}

