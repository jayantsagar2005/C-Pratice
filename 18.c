/*18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years 
have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)*/

#include<stdio.h>
int main()
{
    int n,years,month,days;

    printf("Enter The No. Of days :");
    scanf("%d",&n);

    years = n/365;
    month = (n%365)/30;
    days = n - ((years*365) + (month*30));

    printf("This %d Days is years %d \n", n,years);
    printf("This %d Days is month %d \n", n,month);
    printf("This %d Days is days %d \n", n,days);

    return 0;
}