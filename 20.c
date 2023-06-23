/*20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
Click me to see the solution*/

#include<stdio.h>

int main()
{
    int a,b,c;
    float p1;
      
    printf("Enter the First Number :");
    scanf("%d",&a);

    printf("Enter the Second Number :");
    scanf("%d",&b);

    printf("Enter the Third Number :");
    scanf("%d",&c);

    p1 = (b*b)-(4*(a)*(c));

    if (p1 > 0 && a != 0)
    {
         float x1,x2;

         p1 = sqrt(p1);
         x1 = (-b+p1)/(2*a);
         x2 = (-b-p1)/(2*a);

         printf("The roots of Positive : %f\n",x1);
         printf("The roots of Negative : %f\n",x2);
    }
    
    else{
        printf("Sorry, This Root not Found");
    }

    return 0;
}