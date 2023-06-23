/*33. Write a C program that accepts some integers from the user and finds the highest value and the 
input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5*/

#include<stdio.h>
#define MAX 5 
int main()
{
    int number[MAX],max=0,num_pos=0;
    
    printf("Enter the five integers :\n");

    for (int i = 0; i < MAX; i++)
    {
        scanf("%d",&number[i]);
    }

    for (int  j = 0; j < MAX; j++)
    {
         if (number[j]>max)
         {
           max = number[j];
           num_pos = j; 
         }

         
    }
    
    printf("The hightest value of %d and position of number is %d",max,num_pos);
    
    
    return 0;

}

