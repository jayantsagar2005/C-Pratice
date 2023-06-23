/*17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/

#include<stdio.h>
int main()
{
    int sec,h,m,s;

    printf("Enter the Time of Second :");
    scanf("%d",&sec);
    
    h = sec/3600;
    m = (sec - (h*3600))/60;
    s = (sec - (h*3600) - (m*60));

    printf("The Time of %d seconds is H:M:S -> %d:%d:%d",sec,h,m,s);

    return 0;
}