/*46. Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
Expected Output:
Value of series: 4.62
Click me to see the solution*/

#include<stdio.h>
int main()
{
    float S;

    S = 1 + (float)3/(float)2 + (float)5/(float)4 + (float)7/(float)8;

    printf("value of series : %.2f",S);

    return 0;
}