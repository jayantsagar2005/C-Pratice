/*48. Write a C program that reads and prints the elements of an array of length 7. Before printing, replace 
every negative number, zero, with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15
Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15*/

#include<stdio.h>
int main()
{
    
    int number[5];

    printf("Enetr the first member number :");
    scanf("%d",&number[0]);

    printf("Enetr the first member number :");
    scanf("%d",&number[1]);

    printf("Enetr the first member number :");
    scanf("%d",&number[2]);

    printf("Enetr the first member number :");
    scanf("%d",&number[3]);

    printf("Enetr the first member number :");
    scanf("%d",&number[4]);

    printf("Array values are\n");

    for (int i = 0; i < number[i]; i++)
    {
        printf("n[%d] = %d\n",i,number[i]);
    }
    
    return 0;
}