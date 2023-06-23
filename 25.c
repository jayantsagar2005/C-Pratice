/*25. Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
January, February, March, April, May, June, July, August, September, October, November, December.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Month Number :");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("January\n");
        break;

    case 2:
        printf("February\n");
        break;

    case 3:
        printf("March\n");
        break;

    case 4:
        printf("April\n");
        break;

    case 5:
        printf("May\n");
        break;

    case 6:
        printf("June\n");
        break;

    case 7:
        printf("Jully\n");
        break;

    case 8:
        printf("Augest\n");
        break;

    case 9:
        printf("September\n");
        break;

    case 10:
        printf("October\n");
        break;

    case 11:
        printf("November\n");
        break;

    case 12:
        printf("December\n");
        break;
    
    default:
        printf("Sorry,This number is not Months ");
        break;
    }
    return 0;
}