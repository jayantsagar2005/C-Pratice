/*50. Write a C program to read an array of length 5 and print the position and value of the array elements of value 
less than 5.
Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0*/

#include<stdio.h>
int main()
{
    int number[5];

    printf("Enter the 1st member Array :");
    scanf("%d",&number[0]);

    printf("Enter the 2nd member Array :");
    scanf("%d",&number[1]);

    printf("Enter the 3rd member Array :");
    scanf("%d",&number[2]);

    printf("Enter the 4th member Array :");
    scanf("%d",&number[3]);

    printf("Enter the 5th member Array :");
    scanf("%d",&number[4]);

    for (int i = 0; i < number[i]; i++)
    {
        if (number[i]<=5)
        {
            printf("A[%d] = %d",i,number[i]);
        }
       // sum++;
    }
    

    return 0;
}