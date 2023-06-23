/* 9. Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63*/
 #include<stdio.h>
 int main()
 {
    int first_number = 25;
    int second_number = 38;
    int sum;

    sum = first_number + second_number;

    printf("Sumof the above two integers = %d",sum);
    
return 0;

 }