/*43. Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
Test Data :
Input number of lines: 5
Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30*/

#include<stdio.h>
int main()
{
    int n,m,sum=0;

    printf("Enetr the number of lines :");
    scanf("%d",&n);

    printf("Enter the characters in line :");
    scanf("%d",&m);

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            sum++;
            printf(" %d ",sum);
        }
        printf("\n");
        
    }
    
    return 0;
}