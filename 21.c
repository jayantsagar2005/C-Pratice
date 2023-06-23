/*21. Write a C program that reads an integer and checks the specified range to which it belongs. 
Print an error message if the number is negative and greater than 80.
Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the Any Integre :");
    scanf("%d",&n);

    if (n>=0 && n<=20)
    {
        printf("This integer range is [ 0 to 20]");
    }
    
    else if (n>=21 && n<=40)
    {
        printf("This integer range is [ 21 to 40]");
    }
    
    else if (n>=41 && n<=60)
    {
        printf("This integer range is [ 41 to 60]");
    }
    
    else if (n>=61 && n<=80)
    {
        printf("This integer range is [ 61 to 80]");
    }

    else{
        printf("This integer out of range");
    }
    
    return 0;
}