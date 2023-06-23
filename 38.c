/*38. Write a program that reads two numbers and divides the first number by the second number. If division is not possible print 
"Division is not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0*/

#include<stdio.h>
int main()
{
    int x,y,d;

    printf("Enter the First Integers :");
    scanf("%d",&x);

    printf("Enter the Second Integers :");
    scanf("%d",&y);

    if (x%y != 0)
    {
        printf("This Division Not Possible");
    }

    else{
        d = x/y;

        printf("This Divided is %d",d);
    }

    return 0;
}