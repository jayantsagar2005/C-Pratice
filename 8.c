/*8. Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
 */

#include<stdio.h>
int main()
{
    int days = 1329;

    int years,weeks,Days;

    years = days/365;
    weeks = (days%365)/7;
    Days = days - ((years*365) + (weeks*7));
   
    printf("%d\n",years); 
    printf("%d\n",weeks); 
    printf("%d\n",Days); 

    return 0;
}