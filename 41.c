/*41. Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) 
from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15*/

#include<stdio.h>
int main()
{
    int n,sum = 0;

    printf("One line 3 number\n");
    
    printf("Enter the number of lines :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j < 3; j++)
      {
       sum++;
       printf("%d ",sum);
      
    }

    printf("\n");
  }
    return 0;
}

