/*45. Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50*/

#include<stdio.h>

int main()
{
    
    float sum,total=0;

    for (int i = 2; i <= 50; i++)
    {
        

        sum = (float)1/(float)i;

       // printf("%f\n",sum);

        total += sum;
        
    }

    printf("%.2f",total+1);

    
    
    return 0;
}