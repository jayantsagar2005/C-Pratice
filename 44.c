/*44. Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a 
negative value to terminate the input process.
Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50*/

#include<stdio.h>
int main()
{
    int number[5],sum=0;
    float avg;

    printf("Enter the 1st Student Mathematics Marks : ");
    scanf("%d",&number[0]);

    printf("Enter the 2nd Student Mathematics Marks : ");
    scanf("%d",&number[1]);

    printf("Enter the 3rd Student Mathematics Marks : ");
    scanf("%d",&number[2]);

    printf("Enter the 4th Student Mathematics Marks : ");
    scanf("%d",&number[3]);

    printf("Enter the 5th Student Mathematics Marks : ");
    scanf("%d",&number[4]);

    for (int i = 0; i < number[i]; i++)
    {
        if (number>0)
        {
            sum++;
        }
        
    }

    int total = number[0] + number[1] + number[2] + number[3] + number[4];

    avg = (float)total/(float)sum;

    printf("The totsl of all students mathematics marks : %d\n",total);
    printf("The student scrore of large than 0 : %d\n",sum);
    printf("Average marks in Mathematics : %f \n",avg);
    
    return 0;
}