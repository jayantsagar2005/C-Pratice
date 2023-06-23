/*59. Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
Input any number: 1 + 1/0
Sum = 1/0*/

#include<stdio.h>
int main()
{
    int n;
    float total,sum=0;

    printf("Enter the any number :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        total = (float)1/(float)i;
        sum += total;
    }
    
    printf("The sum of series is %f ",sum);
    return 0;
}