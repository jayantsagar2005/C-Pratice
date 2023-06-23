/*51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third 
element by the fourth. Print the elements of the modified array.
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15*/

#include<stdio.h>
int main()
{
   int number[5];

   printf("Enter the 1st member of the array :");
   scanf("%d",&number[0]); 

   printf("Enter the 2nd member of the array :");
   scanf("%d",&number[1]); 

   printf("Enter the 3rd member of the array :");
   scanf("%d",&number[2]); 

   printf("Enter the 4th member of the array :");
   scanf("%d",&number[3]); 

   printf("Enter the 5th member of the array :");
   scanf("%d",&number[4]); 

   printf("array_n[0] = %d \n",number[4]);

   printf("array_n[0] = %d \n",number[3]);

   printf("array_n[0] = %d \n",number[2]);

   printf("array_n[0] = %d \n",number[1]);

   printf("array_n[0] = %d \n",number[0]);
   

   

    return 0;
}