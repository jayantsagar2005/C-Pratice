/*12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00*/

#include<stdio.h>
int main()
{
    char emp_id[10];
    int hours;
    float salary;

    printf("Enter the Employee's id : ");
    scanf("%s",&emp_id);

    printf("Enter the Employee's Working Hours :");
    scanf("%d",&hours);

    // salary of employee's amount/hours = 15000

    salary = hours*15000;

    printf("The employee id is %s \n",emp_id);
    printf("The salary of Employee of %s is U$ %f \n",emp_id,salary);

    return 0;
}